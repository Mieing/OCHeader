@class NSString;

@interface IESLiveInnerUrlConfigModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *reqFrom;
@property (retain, nonatomic) NSString *innerUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (unsigned long long)evaluateForEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)p_isValidInnerUrlConfig;

@end
