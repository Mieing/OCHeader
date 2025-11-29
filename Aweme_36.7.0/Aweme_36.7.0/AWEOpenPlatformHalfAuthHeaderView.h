@class UITextView, NSString, DUXAvatar, UILabel, UIView;

@interface AWEOpenPlatformHalfAuthHeaderView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UITextView *commentTextView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) DUXAvatar *avatarImageView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentTextColor;
+ (id)contentAttrStr:(id)a0;

- (struct CGSize { double x0; double x1; })fillCommentWithText:(id)a0;
- (id)commentAttrStr:(id)a0;
- (void)trackDidShowHyperLinkIfNeededWithComment:(id)a0;
- (void)configWithClient:(id)a0 scope:(id)a1 descText:(id)a2 openData:(id)a3 isHideLine:(BOOL)a4;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)textViewShouldBeginEditing:(id)a0;

@end
