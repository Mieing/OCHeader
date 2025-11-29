@class NSDictionary, NSString;

@interface ACCGrootCheckModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasGroot;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
