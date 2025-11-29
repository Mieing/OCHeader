@class NSString;

@interface AWEMinorGrootBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *speciesID;
@property (copy, nonatomic) NSString *speciesDescription;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *speciesName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
