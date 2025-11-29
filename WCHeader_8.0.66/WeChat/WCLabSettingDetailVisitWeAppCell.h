@class UIButton, WCLabsAppItem;
@protocol WCLabSettingDetailVisitWeAppCellDelegate;

@interface WCLabSettingDetailVisitWeAppCell : UITableViewCell {
    UIButton *_button;
    WCLabsAppItem *_labItem;
}

@property (weak, nonatomic) id<WCLabSettingDetailVisitWeAppCellDelegate> delegate;

+ (double)height;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)a0;
- (void)onClickVisitWeApp:(id)a0;
- (void)initButton;
- (void).cxx_destruct;

@end
