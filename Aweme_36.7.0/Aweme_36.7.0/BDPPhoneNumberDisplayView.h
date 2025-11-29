@class NSString, UIImageView, UILabel, UIView;

@interface BDPPhoneNumberDisplayView : UIView

@property (retain, nonatomic) UILabel *phoneNumLabel;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *cutLine;
@property (retain, nonatomic) UIImageView *chosenIcon;
@property (copy, nonatomic) NSString *phoneNum;
@property (nonatomic) long long phoneNumId;

- (void)setupCutLine;
- (void)setupPhoneNumLabel;
- (void)setupTag;
- (void)setupChosenIcon;
- (void)setPhoneNumber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
