@class NSString;

@interface AWEMediaTemplateFilteredTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long filterType;
@property (copy, nonatomic) NSString *filterReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
