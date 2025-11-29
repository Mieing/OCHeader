@class UITextView, NSString, UIImageView, DUXAvatar, UILabel, UIView;

@interface AWEOpenPlatformFSAuthHeaderView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIImageView *thirdAppIconImageView;
@property (retain, nonatomic) UILabel *thirdAppNameLabel;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) UIImageView *infoIconImageView;
@property (retain, nonatomic) UILabel *scopeDescLabel;
@property (retain, nonatomic) UITextView *commentTextView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) DUXAvatar *avatarImageView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentTextColor;

- (void)configWithClient:(id)a0 comment:(id)a1 scope:(id)a2;
- (struct CGSize { double x0; double x1; })fillCommentWithText:(id)a0;
- (id)commentAttrStr:(id)a0;
- (void)trackDidShowHyperLinkIfNeededWithComment:(id)a0;
- (void)onTapInfoIcon:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)setupUI;

@end
