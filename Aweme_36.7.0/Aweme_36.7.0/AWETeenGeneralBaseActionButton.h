@class NSDictionary, UIImageView, AWEAwemeModel, UILabel;

@interface AWETeenGeneralBaseActionButton : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) UIImageView *actionBtnImage;
@property (retain, nonatomic) UILabel *actionLabel;

- (void)btnClick;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
