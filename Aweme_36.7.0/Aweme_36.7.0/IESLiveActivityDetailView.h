@class UIButton, NSString, UIImageView, IESLiveActivityDetailItem, UIView, UILabel, IESLiveActivityDetailProgressView;
@protocol IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveActivityDetailView : UIView <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) IESLiveActivityDetailItem *viewModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) NSString *activityData;
@property (retain, nonatomic) UIView *nativeContainer;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *titleImage;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *text;
@property (retain, nonatomic) IESLiveActivityDetailProgressView *progressView;
@property (retain, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)updateLeftIcon;
- (void)bindAction;
- (void)setUpNativeUI;
- (void)trackForShowNormalView;
- (void)updateHybtidUIWithMsg:(id)a0;
- (void)updateHybtidUIWithActivityData:(id)a0;
- (void)p_tap;
- (void)updateWithShowIcon:(BOOL)a0;
- (id)pageInitialDataWithMsg:(id)a0;
- (void)setUpHybridUIWithMsg:(id)a0;
- (void)trackForClickNormalView;
- (void)setUp;
- (void).cxx_destruct;
- (void)updateProgress;
- (void)didMoveToSuperview;
- (void)update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
