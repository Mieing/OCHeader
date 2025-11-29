@interface AWENearbyCardFeedResizeVideoPlugin : AWENearbyCardFeedBasePlugin

@property (nonatomic) struct CGPoint { double x; double y; } originalContentOffset;

- (void)viewDealloc;
- (id)currentCollectionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustFeedFrameWithOriginY:(double)a0;
- (void)resetTabbarAndFeed:(BOOL)a0 duration:(double)a1;
- (void)resetTabbarAndFeed:(BOOL)a0;
- (id)init;
- (void)viewDidLoad;

@end
