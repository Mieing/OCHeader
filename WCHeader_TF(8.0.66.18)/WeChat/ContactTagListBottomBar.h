@class UIButton, MMUILabel;
@protocol ContactTagListBottomBarDelegate;

@interface ContactTagListBottomBar : WCBottomBar

@property (retain, nonatomic) UIButton *createTagButton;
@property (retain, nonatomic) UIButton *editTagsButton;
@property (retain, nonatomic) UIButton *moveToButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (weak, nonatomic) id<ContactTagListBottomBarDelegate> m_delegate;
@property (nonatomic) BOOL isEditing;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)reloadView;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void)onCreateTag;
- (void)onEditTags;
- (void)onMoveTo;
- (void)onDelete;
- (void).cxx_destruct;

@end
