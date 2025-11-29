@class NSString, NSDictionary;

@interface IESECSliceTemplateSlice : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateTypeStr;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *rawTemplate;
@property (copy, nonatomic) NSString *refTemplate;
@property (copy, nonatomic) NSString *geckoURL;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
