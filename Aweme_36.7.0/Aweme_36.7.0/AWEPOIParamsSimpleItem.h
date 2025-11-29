@class NSString, NSNumber, NSArray;

@interface AWEPOIParamsSimpleItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *required;
@property (copy, nonatomic) NSArray *allowed;
@property (copy, nonatomic) NSArray *forbidden;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *iOSVersion;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *parentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
