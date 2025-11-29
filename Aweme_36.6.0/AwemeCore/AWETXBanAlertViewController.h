@class UIImageView, UILabel, AWEUIButton, MASConstraint, NSMutableArray, UIButton, UIView, UIScrollView, NSString, UITextField, UITextView, AWEUserModel, UIImage;

@interface AWETXBanAlertViewController : UIViewController <UITextFieldDelegate, AWETXBanAlertViewControllerProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITextView *descriptionView;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UITextField *inputNickNameView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarDecorationView;
@property (retain, nonatomic) UIView *cameraIcon;
@property (retain, nonatomic) NSMutableArray *decorations;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUIButton *confirmBtn;
@property (retain, nonatomic) UIImageView *decorationChooseView;
@property (retain, nonatomic) UIView *announcementOpenBtn;
@property (nonatomic) BOOL hasChangedAvatar;
@property (nonatomic) long long presentingAvatarDecorationIndex;
@property (retain, nonatomic) UIImage *originAvatar;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) MASConstraint *containerCenterY;
@property (copy, nonatomic) id /* block */ transferToDetailBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadSubviews;
- (void)selectAvatar:(id)a0;
- (void)handleKeyBoardUp:(id)a0;
- (void)handleKeyBoardDown:(id)a0;
- (void)transferToDetail;
- (void)inputChanged:(id)a0;
- (void)confirmChange:(id)a0;
- (void)didTapAnnouncementShowMore;
- (void)selectDecoration:(id)a0;
- (void)selectInput;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
