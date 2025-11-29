@class NSString, AWEYAPTransportTrafficAgreement;

@interface AWEYAPTransportTrafficCard : AWEBaseApiModel

@property (copy, nonatomic) NSString *trafficID;
@property (copy, nonatomic) NSString *trafficName;
@property (copy, nonatomic) NSString *userOpenStatus;
@property (nonatomic) BOOL recommendFlag;
@property (copy, nonatomic) NSString *ccmCardID;
@property (copy, nonatomic) NSString *openAction;
@property (copy, nonatomic) NSString *openActionName;
@property (copy, nonatomic) NSString *openScheme;
@property (retain, nonatomic) AWEYAPTransportTrafficAgreement *agreement;
@property (copy, nonatomic) NSString *trafficBackImg;
@property (copy, nonatomic) NSString *trafficLogo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
