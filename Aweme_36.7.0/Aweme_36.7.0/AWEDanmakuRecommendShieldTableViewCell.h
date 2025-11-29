@class UILabel, AWEDanmakuRecommendShieldTableViewCellModel, UIButton;

@interface AWEDanmakuRecommendShieldTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEDanmakuRecommendShieldTableViewCellModel *cellModel;
@property (nonatomic) double width;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;

- (id)danmakuContentAttributeString;
- (void)updateMyModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)cancelAction;
- (void)setupUI;
- (void)confirmAction;
- (void)updateUI;

@end
