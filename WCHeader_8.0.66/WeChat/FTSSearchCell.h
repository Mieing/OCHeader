@class UIImageView, AttributeLabel, NSString;

@interface FTSSearchCell : MMTableViewCell {
    UIImageView *_searchIcon;
    AttributeLabel *_searchLabel;
    NSString *_showPrefix;
    NSString *_showSuffix;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateStatus:(BOOL)a0;
- (void)updateSearchTip:(id)a0 suffix:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
