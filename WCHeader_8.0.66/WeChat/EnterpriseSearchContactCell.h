@class AttributeLabel, MMHeadImageView, UIView;

@interface EnterpriseSearchContactCell : MMTableViewCell {
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    UIView *_separatorBottomView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateEnterpriseSearchCellWithData:(id)a0 isLastCell:(BOOL)a1;
- (void).cxx_destruct;

@end
