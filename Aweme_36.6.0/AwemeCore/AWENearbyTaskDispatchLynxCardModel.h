@class NSArray, NSString;

@interface AWENearbyTaskDispatchLynxCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *cardType;
@property (copy, nonatomic) NSString *cardArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
