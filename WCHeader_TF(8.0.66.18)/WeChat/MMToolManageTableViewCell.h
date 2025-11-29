@class MMUILabel, UIImageView, UIView, MMWebImageView, UIButton;
@protocol MMToolManageTableViewCellDelegate;

@interface MMToolManageTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIImageView *reorderButton;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (nonatomic) BOOL isAdded;
@property (weak, nonatomic) id<MMToolManageTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)onClickEdit;
- (void)configueCell:(id)a0 isAdded:(BOOL)a1;
- (void)configueCell:(id)a0 isAdded:(BOOL)a1 canUp:(BOOL)a2 canDown:(BOOL)a3;
- (BOOL)isTouchAtResortButton:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)onAccessibilityCustomAction:(id)a0;
- (void).cxx_destruct;

@end
