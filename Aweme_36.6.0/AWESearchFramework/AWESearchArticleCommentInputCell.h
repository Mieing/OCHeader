@class UIStackView, AWESearchArticleDetailPageContext, UIImageView, AWEBinding, UIView, NSString, YYLabel;

@interface AWESearchArticleCommentInputCell : UICollectionViewCell <AWEUserMessage>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *commentInputView;
@property (retain, nonatomic) YYLabel *inputLabel;
@property (retain, nonatomic) UIImageView *albumIconView;
@property (retain, nonatomic) UIImageView *atIconView;
@property (retain, nonatomic) UIImageView *emojiIconView;
@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (retain, nonatomic) AWEBinding *binding;
@property (copy, nonatomic) id /* block */ inputLabelClickHandler;
@property (copy, nonatomic) id /* block */ albumIconClickHandler;
@property (copy, nonatomic) id /* block */ atIconClickHandler;
@property (copy, nonatomic) id /* block */ emojiIconClickHandler;
@property (copy, nonatomic) id /* block */ avatarClickHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)placeholderString;

@end
