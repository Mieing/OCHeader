@class UILabel, UIView, AWENoxusPlayerSettingTypeModel, DUXTextTag, UIButton;

@interface AWENoxusPlayerSettingTypeCell : UITableViewCell

@property (retain, nonatomic) UIButton *cellBtn;
@property (retain, nonatomic) AWENoxusPlayerSettingTypeModel *selectModel;
@property (retain, nonatomic) DUXTextTag *videoTag;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isCurrentGuide;

- (void)setupCellBtn;
- (unsigned long long)matchPixel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateModel:(id)a0;

@end
