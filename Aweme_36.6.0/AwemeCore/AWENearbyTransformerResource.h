@class NSString;

@interface AWENearbyTransformerResource : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *lottie;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
