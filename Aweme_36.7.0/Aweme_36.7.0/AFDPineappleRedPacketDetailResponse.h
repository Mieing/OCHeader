@class NSString, NSDictionary;

@interface AFDPineappleRedPacketDetailResponse : AWEBaseApiModel

@property (nonatomic) BOOL openable;
@property (copy, nonatomic) NSString *toastMessage;
@property (copy, nonatomic) NSString *redPacketSchema;
@property (nonatomic) long long recvStatus;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *extraDict;

+ (id)redPacketInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
