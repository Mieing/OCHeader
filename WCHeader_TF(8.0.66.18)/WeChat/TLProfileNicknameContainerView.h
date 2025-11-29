@class MMWebImageView, CContact, InteractionLabel;

@interface TLProfileNicknameContainerView : UIView

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) InteractionLabel *nicknameLabel;
@property (retain, nonatomic) MMWebImageView *textStateImageView;
@property (copy, nonatomic) id /* block */ nicknameClickBlock;
@property (copy, nonatomic) id /* block */ textStateClickBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1;
- (void)initView;
- (void)initTextStateImageView;
- (void)initNicknameLabel;
- (void)layoutSubviews;
- (void)updateWithContact:(id)a0;
- (id)contactTextStateIcon;
- (void)setLabelFontSize:(double)a0;
- (void)onClickNickname;
- (void)onClickTextState;
- (void).cxx_destruct;

@end
