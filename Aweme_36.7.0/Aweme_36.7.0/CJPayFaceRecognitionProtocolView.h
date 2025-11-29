@class UILabel, CJPayStyleCheckBox, NSString;
@protocol CJPayTrackerProtocol;

@interface CJPayFaceRecognitionProtocolView : UIView

@property (retain, nonatomic) CJPayStyleCheckBox *checkBoxButton;
@property (retain, nonatomic) UILabel *protocolLabel;
@property (nonatomic) BOOL checkBoxIsSelect;
@property (copy, nonatomic) NSString *agreementName;
@property (copy, nonatomic) NSString *agreementURL;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

- (void)protocolLabelTapped:(id)a0;
- (void)updateWithProtocolURL:(id)a0;
- (id)getProtocolHeadStr;
- (void)checkBoxButtonClick;
- (id)initWithAgreementName:(id)a0 agreementURL:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
