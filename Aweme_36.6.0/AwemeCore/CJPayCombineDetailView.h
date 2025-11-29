@class UILabel;

@interface CJPayCombineDetailView : UIView

@property (retain, nonatomic) UILabel *cashTiteLabel;
@property (retain, nonatomic) UILabel *cashAMountLabel;
@property (retain, nonatomic) UILabel *cardTiteLabel;
@property (retain, nonatomic) UILabel *cardAMountLabel;

- (void)updateWithCombineShowInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
