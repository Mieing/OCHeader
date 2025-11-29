@class NSArray, NSString;

@interface AWEIncentiveDYSlideshowPicData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long interval;
@property (copy, nonatomic) NSArray *productList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
