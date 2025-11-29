@class UILabel, UIImageView, UIView;

@interface MMFinderLiveConnectMicAudienceSettingCellView : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UIView *separateLineView;
@property (nonatomic) BOOL isSingleLineMode;
@property (nonatomic) BOOL showSeparator;

+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateCellWithTitle:(id)a0 subtitle:(id)a1 isSingleLineMode:(BOOL)a2 andShowSeparator:(BOOL)a3;
- (void).cxx_destruct;

@end
