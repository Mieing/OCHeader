@class IESECMallListKitBigFontConfig, UILabel, UIView, IESECUIImageView;

@interface IESECMallFeedbackCell : UITableViewCell

@property (retain, nonatomic) IESECUIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) IESECUIImageView *arrowImageView;
@property (retain, nonatomic) IESECMallListKitBigFontConfig *bigFontConfig;
@property (copy, nonatomic) id /* block */ clickCellBlk;

- (void)tapCell:(id)a0;
- (void)updateCellData:(id)a0 title:(id)a1 isMore:(BOOL)a2 tableViewWidth:(double)a3;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
