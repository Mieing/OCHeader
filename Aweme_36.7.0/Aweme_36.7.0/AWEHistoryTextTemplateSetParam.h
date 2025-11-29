@class NSString, NSDictionary;

@interface AWEHistoryTextTemplateSetParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *foregroundColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *outlineColor;
@property (nonatomic) BOOL outline;
@property (nonatomic) long long alignType;
@property (nonatomic) double outlineWidth;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
