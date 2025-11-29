@class MMHeadImageView, UIView, MMUIButton, MMUILabel;

@interface MiniTaskCollectionScheduleCell : MiniTaskCollectionBaseCell

@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *remindTimeLabel;
@property (retain, nonatomic) MMUIButton *remindButton;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) UIView *separatorView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuPopoverFrame;
- (id)menuItems;
- (void)setViewModel:(id)a0;
- (void)setIsEditing:(BOOL)a0;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (id)getContactDisplayName:(id)a0;
- (void)onRemindButtonClick:(id)a0;
- (void)onDeleteButtonClick:(id)a0;
- (void)onDeleteMenuClick:(id)a0;
- (void).cxx_destruct;

@end
