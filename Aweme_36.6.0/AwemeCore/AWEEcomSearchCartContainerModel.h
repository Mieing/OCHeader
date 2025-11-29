@class NSString;

@interface AWEEcomSearchCartContainerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cartSchema;
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;
@property (nonatomic) BOOL showAddToCartAnimation;
@property (nonatomic) double desX;
@property (nonatomic) double desY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
