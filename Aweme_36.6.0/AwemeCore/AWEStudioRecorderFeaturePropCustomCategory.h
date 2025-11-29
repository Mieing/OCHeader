@class NSString;

@interface AWEStudioRecorderFeaturePropCustomCategory : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidate;
- (void).cxx_destruct;

@end
