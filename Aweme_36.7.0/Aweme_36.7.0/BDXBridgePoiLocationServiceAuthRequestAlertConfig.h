@class NSString, NSNumber;

@interface BDXBridgePoiLocationServiceAuthRequestAlertConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *actionText;
@property (copy, nonatomic) NSString *cancelText;
@property (retain, nonatomic) NSNumber *showAuthorizationInAppAlert;
@property (retain, nonatomic) NSNumber *dialogStyle;
@property (retain, nonatomic) NSNumber *withBottomBar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
