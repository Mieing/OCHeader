@class NSString, IESIMButton, AWEIMHalfScreenContainerViewController;

@interface AWEIMUrgeEnterpriseCommitGuideViewController : UIViewController <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) IESIMButton *confirmBtn;
@property (nonatomic) long long scene;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (void)didClickConfirmBtn;
- (void)halfScreenContainerVCDidTapConatainer:(id)a0;
- (void)addGuideSubviewsAndLayout;
- (void)trackUrgeReplyGuideShow;
- (void)dismissSelfVC;
- (void)trackUrgeReplyGuideClickWithActionType:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithScene:(long long)a0;
- (void)viewDidLoad;
- (void)didTapCloseButton;

@end
