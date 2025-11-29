@class NSString, NSNumber;

@interface BDXBridgePoiLocationServiceServiceRequestAlertConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *actionText;
@property (copy, nonatomic) NSString *cancelText;
@property (retain, nonatomic) NSNumber *showServiceInAppAlert;
@property (retain, nonatomic) NSNumber *dialogStyle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
