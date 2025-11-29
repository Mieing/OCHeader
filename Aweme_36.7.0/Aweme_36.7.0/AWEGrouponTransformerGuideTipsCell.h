@class NSString, UICollectionView, AWEGrouponPageContext, AWEAwemeModel, UIView, UIViewController;
@protocol AWEGrouponTransformerDelegate, AWEGrouponC2NicolEventDelegate, AWEGrouponC2ChildTrackerProtocol, AWEGrouponTransformerControllerProtocol, AWEGrouponC2CommonLifeCycleProtocol, AWEGrouponC2ContainerFeedCellControllerProtocol;

@interface AWEGrouponTransformerGuideTipsCell : UICollectionViewCell <AWEGrouponC2ContainerFeedCellProtocol>

@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (weak, nonatomic) id<AWEGrouponC2NicolEventDelegate> nicolDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL reuseCell;
@property (nonatomic) BOOL reuseCard;
@property (retain, nonatomic) id<AWEGrouponC2ContainerFeedCellControllerProtocol, AWEGrouponC2ChildTrackerProtocol> controller;
@property (weak, nonatomic) UIViewController *parentVC;
@property (weak, nonatomic) UIViewController *feedController;
@property (retain, nonatomic) UIView *guideTipsView;
@property (weak, nonatomic) UIViewController<AWEGrouponC2CommonLifeCycleProtocol, AWEGrouponTransformerControllerProtocol> *transformerVC;
@property (weak, nonatomic) id<AWEGrouponTransformerDelegate> delegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calculateCellSizeWithWidth:(double)a0 model:(id)a1;

- (void)didClick;
- (void)endDisplay;
- (void)hideBubbleWith:(id)a0 dismissType:(unsigned long long)a1;
- (void)willLeaveWithLeaveMethod:(long long)a0;
- (void)configCellWithModel:(id)a0 withIndex:(long long)a1 cellWidth:(double)a2 pageContext:(id)a3;
- (void)onClickWithModel:(id)a0;
- (void)willDisplayWhenDidAppear;
- (id)getBtmSourceTokenStringWithModel:(id)a0;
- (void)resetChildViewController;
- (void)configGuideTipWithModel:(id)a0 cellWidth:(double)a1;
- (id)handleGrouponGuideTipsWithModel:(id)a0 inView:(id)a1 pageContext:(id)a2;
- (id)appendJumpSourceTokenWithUrl:(id)a0 model:(id)a1 pageContext:(id)a2;
- (void)trackGuideTipsDissmiss:(id)a0 dismissType:(unsigned long long)a1;
- (void)configCardWithModel:(id)a0 cellWidth:(double)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
