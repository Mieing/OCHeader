@class UIImageView, SightIconView, UILabel, MMUIButton, UIView;

@interface WCFileBrowserToolBarCell : UITableViewCell {
    UIView *m_contentView;
}

@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) SightIconView *videoIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) MMUIButton *removeButton;
@property (copy, nonatomic) id /* block */ OnClickRemoveButton;
@property (retain, nonatomic) id fileInfo;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)layoutUI;
- (void)onRemove;
- (void).cxx_destruct;

@end
