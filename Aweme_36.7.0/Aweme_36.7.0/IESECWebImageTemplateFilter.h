@class NSString, NSDictionary;

@interface IESECWebImageTemplateFilter : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pattern;
@property (nonatomic) long long filterType;
@property (nonatomic) long long groupIndex;
@property (copy, nonatomic) NSString *targetRule;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
