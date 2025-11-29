@class NSMutableDictionary;

@interface TPOptionalParamManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *paramNameDic;
@property (retain, nonatomic) NSMutableDictionary *paramValueDic;

+ (id)shaderManager;

- (id)init;
- (void)paramDictionarySetTPOptionalParam;
- (void)addParamValue:(id)a0 forKey:(unsigned long long)a1;
- (void)addParamValue:(id)a0 forString:(id)a1;
- (unsigned long long)getOptionalIDForKey:(id)a0;
- (id)getParamValueForkey:(id)a0;
- (id)getParamKeyArray;
- (void).cxx_destruct;

@end
