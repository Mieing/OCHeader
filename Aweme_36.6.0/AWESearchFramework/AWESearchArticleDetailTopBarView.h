@class UIView, NSString, AWESearchArticleDetailPageContext, UIImageView, AWESearchArticleAuthorFollowView, NSMutableArray, MASConstraint, UILabel;

@interface AWESearchArticleDetailTopBarView : UIView <AWEUserMessage>

@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWESearchArticleAuthorFollowView *followButton;
@property (nonatomic) BOOL followBinded;
@property (retain, nonatomic) MASConstraint *nameLabelRightConstraint;
@property (retain, nonatomic) NSMutableArray *bindings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)followStatusChangeForUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didClickFollow;
- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
