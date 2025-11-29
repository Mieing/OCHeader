@class UILabel, MMTemplateMsgScopeItem, MMUIButton;
@protocol MMTemplateMsgAuthScopeCellDelegate;

@interface MMTemplateMsgAuthScopeCell : UITableViewCell {
    MMTemplateMsgScopeItem *_scopeItem;
}

@property (retain, nonatomic) MMUIButton *checkBoxButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *infoButton;
@property (weak, nonatomic) id<MMTemplateMsgAuthScopeCellDelegate> delegate;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initCheckBoxView;
- (void)initTitleLabel;
- (void)initInfoButton;
- (void)layoutSubviews;
- (void)updateScopeItem:(id)a0;
- (void)onCheckBoxButtonClicked:(id)a0;
- (void)onInfoButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
