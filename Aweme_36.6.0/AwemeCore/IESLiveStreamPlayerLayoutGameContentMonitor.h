@interface IESLiveStreamPlayerLayoutGameContentMonitor : NSObject

- (BOOL)isValidRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isCGRectContainsNaN:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onInnerLayoutUpdate:(id)a0;
- (void)checkLandscapeLayoutIfNeed:(id)a0;
- (id)landscapeMonitorLayouts;

@end
