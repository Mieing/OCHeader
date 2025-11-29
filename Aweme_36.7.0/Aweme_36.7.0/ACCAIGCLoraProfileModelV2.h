@class NSArray, NSString;

@interface ACCAIGCLoraProfileModelV2 : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long userId;
@property (retain, nonatomic) NSArray *loraList;
@property (nonatomic) BOOL hasCreatedModel;
@property (nonatomic) long long dailyRemainingCreateTime;
@property (nonatomic) long long remainingCreateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loraListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
