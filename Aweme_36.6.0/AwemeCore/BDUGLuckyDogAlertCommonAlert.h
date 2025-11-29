@class NSAttributedString, UIImageView, BDUGLuckyDogCommonAlertModel, UIView, UILabel, UIButton;

@interface BDUGLuckyDogAlertCommonAlert : BDUGLuckyDogAlertBaseView

@property (retain, nonatomic) BDUGLuckyDogCommonAlertModel *alertModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *subTitleLable;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *rewardLable;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double showTimeStamp;
@property (copy, nonatomic) NSAttributedString *titlteAttributedString;
@property (copy, nonatomic) NSAttributedString *subTitleAtttributedString;
@property (copy, nonatomic) NSAttributedString *btnAttributeString;

- (id)subTitlteAttributedString;
- (id)imageWithImageName:(id)a0 imageColor:(id)a1;
- (double)subTitleHeight;
- (void)configureConfirmBtn;
- (void)_updateTrackerDictionary:(id)a0 withAlertModel:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (double)titleHeight;
- (void)_setup;
- (void)show;
- (void)confirmAction;
- (void)_configureView;
- (double)totalHeight;

@end
