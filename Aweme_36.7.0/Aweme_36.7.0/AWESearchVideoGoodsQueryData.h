@class NSString;

@interface AWESearchVideoGoodsQueryData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *detection;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *queryId;
@property (copy, nonatomic) NSString *tosId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
