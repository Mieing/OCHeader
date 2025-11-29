@class NSArray, NSString, NSDictionary;

@interface IESECWebImageTemplateFormat : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long replaceType;
@property (nonatomic) long long resizeType;
@property (nonatomic) long long scaleWidth;
@property (nonatomic) long long scaleHeight;
@property (nonatomic) long long specificScale;
@property (copy, nonatomic) NSArray *widthOptions;
@property (copy, nonatomic) NSString *replaceFormat;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
