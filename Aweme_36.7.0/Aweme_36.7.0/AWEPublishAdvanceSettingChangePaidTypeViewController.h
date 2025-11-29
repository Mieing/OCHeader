@class AWEPublishPaymentPreviewItem, UIImageView, UILabel, UIView;

@interface AWEPublishAdvanceSettingChangePaidTypeViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleBottomSeparator;
@property (retain, nonatomic) UIView *singlePaidView;
@property (retain, nonatomic) UIImageView *singlePaidChooseIcon;
@property (retain, nonatomic) UIView *paidBottomSeparator;
@property (retain, nonatomic) UIView *openVIPView;
@property (retain, nonatomic) UIImageView *openVIPChooseIcon;
@property (retain, nonatomic) AWEPublishPaymentPreviewItem *item;
@property (copy, nonatomic) id /* block */ changePaidTypeBlock;
@property (copy, nonatomic) id /* block */ checkCanChooseSinglePaidCallback;

- (id)buildSeparator;
- (void)didTapSinglePaidView;
- (id)buildTitleLabel;
- (void)didTapOpenVIPView;
- (void)updatePaidType:(unsigned long long)a0;
- (id)p_aweliveModuleImageWithName:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
