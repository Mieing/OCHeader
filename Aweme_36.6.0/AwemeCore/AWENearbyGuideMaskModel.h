@class NSString;

@interface AWENearbyGuideMaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemIndex;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long autoDimissTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
