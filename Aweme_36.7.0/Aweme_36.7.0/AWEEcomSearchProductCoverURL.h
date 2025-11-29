@class NSNumber, NSString;

@interface AWEEcomSearchProductCoverURL : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *productId;
@property (copy, nonatomic) NSString *coverUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
