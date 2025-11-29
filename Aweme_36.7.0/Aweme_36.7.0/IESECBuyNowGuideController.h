@class UICollectionView, UIView;
@protocol YataInstanceInterface;

@interface IESECBuyNowGuideController : NSObject

@property (weak, nonatomic) UIView *guideView;
@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;
@property (weak, nonatomic) UICollectionView *mainCollectionView;
@property (nonatomic) BOOL hasShowedGuide;
@property (nonatomic) BOOL hasHiddenGuide;

- (void)showGuide;
- (void)scrollToGuideTargetObject;
- (id)getRenderObjectWithRenderInfo:(id)a0;
- (id)initWithGuideView:(id)a0 yataInstance:(id)a1 mainCollectionView:(id)a2;
- (void)dealGuideWithScrollView:(id)a0;
- (void).cxx_destruct;

@end
