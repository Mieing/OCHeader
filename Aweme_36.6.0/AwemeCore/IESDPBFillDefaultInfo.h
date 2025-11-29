@class NSString, IESDPBDefinitionNodeProperty, NSMutableDictionary;

@interface IESDPBFillDefaultInfo : NSObject

@property (retain, nonatomic) NSString *key;
@property (weak, nonatomic) IESDPBDefinitionNodeProperty *value;
@property (weak, nonatomic) NSMutableDictionary *context;

+ (void)fillDefaultValueFor:(id)a0 defConf:(id)a1 defNode:(id)a2 context:(id)a3;

- (BOOL)isFQValue;
- (BOOL)isMapValue;
- (BOOL)isNormalValue;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
