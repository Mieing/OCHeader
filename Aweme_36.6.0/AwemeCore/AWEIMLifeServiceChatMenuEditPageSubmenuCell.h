@class NSString, NSIndexPath, AWEIMLifeServiceChatMenuEditPageMenuContentView;
@protocol AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate;

@interface AWEIMLifeServiceChatMenuEditPageSubmenuCell : UICollectionViewCell <AWEIMLifeServiceChatMenuEditPageMenuContentViewDelegate>

@property (retain, nonatomic) AWEIMLifeServiceChatMenuEditPageMenuContentView *menuContentView;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)lifeServiceChatMenuEditPageMenuContentView:(id)a0 didPress:(id)a1;
- (void)lifeServiceChatMenuEditPageMenuContentView:(id)a0 didTapDelete:(id)a1;
- (void)__didTapMenuContent;
- (void)configWithModel:(id)a0 enableDelete:(BOOL)a1 enableMove:(BOOL)a2;
- (void)hideAllContent;
- (void)setupBottomCornerRadius;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
