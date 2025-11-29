@class NSString, AWETeenGeneralCardVideoController, UIView, AWETeenGeneralCardVideoModel;
@protocol AWETeenGeneralVideoInteractionViewProtocol, AWETeenGeneralCellInteractionDelegate;

@interface AWETeenGeneralBaseVideoCell : UICollectionViewCell <AWETeenGeneralCellProtocol>

@property (retain, nonatomic) AWETeenGeneralCardVideoModel *videoModel;
@property (retain, nonatomic) AWETeenGeneralCardVideoController *videoController;
@property (retain, nonatomic) UIView<AWETeenGeneralVideoInteractionViewProtocol> *interactionView;
@property (weak, nonatomic) id<AWETeenGeneralCellInteractionDelegate> interactionDelegate;
@property (nonatomic) double lastClickTims;
@property (nonatomic) BOOL isDigging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)p_setupParentVC:(id)a0;
- (void)p_addChildVC:(id)a0;
- (void)p_removeChildVC;
- (void)initializeLayout;
- (void)showLog;
- (void)configWithModel:(id)a0 interactionDelegate:(id)a1 parentVC:(id)a2 cardType:(unsigned long long)a3 extraParam:(id)a4;
- (id)createInteractionView;
- (void)p_onScreenClick:(id)a0;
- (void)p_onScreenSingleClicked;
- (void)p_onScreenDoubleClicked:(id)a0;
- (void)p_doubleClickedLikeActionWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
