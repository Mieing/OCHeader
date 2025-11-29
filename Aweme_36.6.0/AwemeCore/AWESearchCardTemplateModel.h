@class NSString;

@interface AWESearchCardTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *renderInfoTemplate;
@property (copy, nonatomic) NSString *dataTemplate;
@property (copy, nonatomic) NSString *rawDataTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
