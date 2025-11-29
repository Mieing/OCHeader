@class IESLiveRightBottomMutuallyExclusiveItem, UILabel, UIView, UIButton;

@interface IESLiveCloudCollaborateSmallWindowPreview : UIView

@property (retain, nonatomic) UIView *cameraPreview;
@property (retain, nonatomic) UIView *stateContainer;
@property (retain, nonatomic) UIView *stateView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *smallWindowItem;

- (void)updatePreviewState:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 exitBLock:(id /* block */)a1;
- (void)onExitButtonClick;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;

@end
