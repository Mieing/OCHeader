@class NSString, IESECWebImageTemplateFormat, NSDictionary;

@interface IESECWebImageTemplateRule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pattern;
@property (nonatomic) long long sizeOption;
@property (nonatomic) long long remakeType;
@property (retain, nonatomic) IESECWebImageTemplateFormat *templateFormat;
@property (copy, nonatomic) NSDictionary *templateGroupFormats;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateGroupFormatsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
