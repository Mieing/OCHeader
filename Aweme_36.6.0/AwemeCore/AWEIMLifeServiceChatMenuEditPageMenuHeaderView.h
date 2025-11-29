@class AWEIMLifeServiceChatMenuEditPageAddMenuContentView, AWEIMLifeServiceChatMenuEditPageMenuContentView, NSString, UIView;
@protocol AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate;

@interface AWEIMLifeServiceChatMenuEditPageMenuHeaderView : UICollectionReusableView <AWEIMLifeServiceChatMenuEditPageMenuContentViewDelegate>

@property (retain, nonatomic) AWEIMLifeServiceChatMenuEditPageMenuContentView *menuContentView;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuEditPageAddMenuContentView *addMenuView;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate> delegate;
@property (nonatomic) long long section;
@property (nonatomic) BOOL isOnlyItemInSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)lifeServiceChatMenuEditPageMenuContentView:(id)a0 didPress:(id)a1;
- (void)lifeServiceChatMenuEditPageMenuContentView:(id)a0 didTapDelete:(id)a1;
- (void)hideAllContent;
- (void)__refreshContentViewCornerRadius;
- (void)__didClickMenuView;
- (void)__didClickAddMenuView;
- (void)configWithModel:(id)a0 enableMove:(BOOL)a1;
- (void)refreshToAddMenuUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })touchFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
