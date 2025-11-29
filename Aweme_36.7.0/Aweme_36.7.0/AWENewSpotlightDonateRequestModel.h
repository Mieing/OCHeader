@class NSArray, NSNumber, NSString;

@interface AWENewSpotlightDonateRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *fixedQuerys;
@property (copy, nonatomic) NSArray *querys;
@property (retain, nonatomic) NSNumber *expireTime;
@property (nonatomic) BOOL hitAB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fixedQuerysJSONTransformer;
+ (id)querysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
