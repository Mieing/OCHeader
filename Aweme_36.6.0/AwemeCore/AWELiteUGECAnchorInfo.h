@class NSArray, NSString;

@interface AWELiteUGECAnchorInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long closeTimesLimitDay;
@property (nonatomic) long long closeTimesLimit;
@property (copy, nonatomic) NSArray *cardInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
