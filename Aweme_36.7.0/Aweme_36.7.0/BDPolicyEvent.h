@class NSString, NSDictionary, NSError, NSNumber, BDPrivacyCertValidateContext;
@protocol BDPrivacyCertProtocol;

@interface BDPolicyEvent : NSObject

@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> privacyCert;
@property (retain, nonatomic) BDPrivacyCertValidateContext *context;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSNumber *costTime;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorLevel;
@property (copy, nonatomic) NSDictionary *extraValidateInfo;

- (void)prepareToSend;
- (void).cxx_destruct;

@end
