@class NSString;

@interface BDUGLuckyBridgeGetEnvInfoModel : BDXBridgeModel

@property (copy, nonatomic) NSString *ppe;
@property (nonatomic) double currentTimeValue;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *actToken;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *geckoChannel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
