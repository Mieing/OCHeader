@class NSString, UICollectionView, UIView, AWEDetailNaviBar;
@protocol AWEDetailFullNaviBarHost;

@interface AWEDetailFullNaviBarAnimator : NSObject <AWEDetailBusinessHandlerProtocol>

@property (weak, nonatomic) id<AWEDetailFullNaviBarHost> host;
@property (nonatomic) double hostNaviBarBottomOffsetY;
@property (weak, nonatomic) UICollectionView *hostCollectionView;
@property (weak, nonatomic) UIView *hostNaviBarBackgoundView;
@property (weak, nonatomic) AWEDetailNaviBar *hostNaviBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
