@class UIFont, UIImageView, CJPayInvestResultPayInfoViewRowData, UILabel;

@interface CJPayInvestResultPayInfoCell : UITableViewCell

@property (class, nonatomic) double minHeight;
@property (class, nonatomic) double safeDistance;
@property (class, retain, nonatomic) UIFont *font;

@property (retain, nonatomic) CJPayInvestResultPayInfoViewRowData *rowData;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double realHeight;


- (void)configWith:(id)a0;
- (void)p_makeConstraints;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)didMoveToWindow;

@end
