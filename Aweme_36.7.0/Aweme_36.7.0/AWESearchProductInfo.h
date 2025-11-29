@class NSString, NSDictionary;

@interface AWESearchProductInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long productId;
@property (copy, nonatomic) NSString *coverImageURL;
@property (copy, nonatomic) NSString *couponCoverImageURL;
@property (nonatomic) double relScore;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
