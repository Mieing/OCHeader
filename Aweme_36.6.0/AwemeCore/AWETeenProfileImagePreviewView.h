@class AWETeenDonwloadAnimationButton, NSString, UIImageView, UIView, AWEAnimatedButton, AWEUILoadingView;

@interface AWETeenProfileImagePreviewView : UIView

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL isCurrentLoginUser;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEAnimatedButton *changeButton;
@property (retain, nonatomic) AWETeenDonwloadAnimationButton *downloadButton;
@property (retain, nonatomic) UIView *downloadBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *indicator;
@property (copy, nonatomic) id /* block */ changeButtonClickBlock;

+ (void)removeImagePreviewView;

- (void)breakpointDidUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 imageURLArray:(id)a2 userID:(id)a3 type:(long long)a4;
- (void)avatarPreviewClicked;
- (void)setupAvatarUI;
- (BOOL)isPreviewingAvatar;
- (void)downloadButtonPressed:(id)a0;
- (void)changeButtonPressed:(id)a0;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;
- (void)setupAccessibility;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
