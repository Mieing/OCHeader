@class NSNumber, NSArray, NSString;

@interface IESLLLiveMessageUpdate : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSArray *cardInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
