@class NSString, AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel;

@interface AWEAntiAddictStrategyOnTimeVideoModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long onTimeVideoBeginTime;
@property (readonly, nonatomic) long long onTimeVideoEndTime;
@property (readonly, nonatomic) long long onTimeVideoPlayTime;
@property (readonly, nonatomic) AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel *suppressLimitModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suppressLimitModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
