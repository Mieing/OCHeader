@class UIButton, NSString, DYLoginNextActionButton, UILabel, DYPhoneNumberModel, DYUserProtocolView;
@protocol DYQuickBindViewDelegate;

@interface DYQuickBindView : UIView

@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *carrierURL;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleHintLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYLoginNextActionButton *quickBindButton;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (retain, nonatomic) UIButton *otherButton;
@property (weak, nonatomic) id<DYQuickBindViewDelegate> delegate;

+ (Class)aAWEUserModuleAgreementInfoCommonAdapterClass;

- (id)aAWEUserModuleAgreementInfoCommonAdapter;
- (void)p_setupUIForFullScreen;
- (void)quickBindAction;
- (id)initWithPhoneNumber:(id)a0 carrierType:(long long)a1 title:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)otherAction;

@end
