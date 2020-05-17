#import <Cocoa/Cocoa.h>

#include "WindowData.h"

@interface OSXWindowFrameView : NSView
{
    @public SWindowData     *window_data;
#if defined(USE_METAL_API)
    @private NSTrackingArea *tracking_area;
#endif
}

@end

