@class NSString;

@interface AWEProfileUrgeControlModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *nextUrgeType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonBackgroundURL;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *showTippingPanel;
@property (copy, nonatomic) NSString *tippingPanelText;
@property (copy, nonatomic) NSString *hasSendGift;

- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)a0;

@end
