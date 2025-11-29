@class UILabel, UIView;

@interface IESLiveLimitCommentPageTabView : UIView

@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *emojiLabel;
@property (nonatomic) BOOL hasEmojiData;
@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) long long selectIndex;
@property (copy, nonatomic) id /* block */ tabTapBlock;
@property (copy, nonatomic) id /* block */ indexChangeBlock;

- (void)updateTextColor:(id)a0;
- (id)createLabel;
- (void)commentTapAction;
- (void)emojiTapAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
