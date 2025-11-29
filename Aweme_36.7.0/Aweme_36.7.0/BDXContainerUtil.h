@interface BDXContainerUtil : NSObject

+ (double)fetchScreenAvailableHeight;
+ (double)fetchScreenAvailableWidth;
+ (id)topBDXPageViewController;
+ (id)topBDXViewController;
+ (void)handlePageVisiablityChange:(BOOL)a0 source:(id)a1 container:(id)a2;
+ (BOOL)isMultiWindow;
+ (struct CGSize { double x0; double x1; })fetchScreenAvailableSize;
+ (id)bdx_topViewController;
+ (double)containerWidthWithSchema:(id)a0 width:(double)a1 height:(double)a2;
+ (void)interceptCloseAndSendEventWithType:(long long)a0 disableClose:(BOOL)a1 container:(id)a2;
+ (double)topMargin;

@end
