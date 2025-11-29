@class NSString, UIImageView, AWEButton, AWEChallengeModel;

@interface AWEChallengeImagePreviewViewController : UIViewController <AWEChallengeImagePreviewViewControllerProtocol>

@property (retain, nonatomic) AWEChallengeModel *model;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEButton *shareButton;
@property (copy, nonatomic) NSString *processId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onShareBtnClicked:(id)a0;
- (void)p_addNaviBar;
- (BOOL)p_shouldAddShareButton;
- (void)onShareBtnClicked_IMP:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
