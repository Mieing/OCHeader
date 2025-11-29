@class AWEIMLifeServiceChatMenuEditPageAddMenuContentView;
@protocol AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate;

@interface AWEIMLifeServiceChatMenuEditPageAddSubmenuFooterView : UICollectionReusableView

@property (retain, nonatomic) AWEIMLifeServiceChatMenuEditPageAddMenuContentView *addMenuView;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate> delegate;
@property (nonatomic) long long section;

+ (id)identifier;

- (void)__didClickAddSubmenuView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
