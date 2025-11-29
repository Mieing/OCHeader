@class NSMutableDictionary, NSMutableArray;

@interface VEConfigCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *VEABInfoDict;
@property (retain, nonatomic) NSMutableArray *VEABInfoRequestArr;
@property (copy, nonatomic) id /* block */ valuePredicate;

+ (id)sharedInstance;

- (id)getEffectABInfoByKey:(id)a0 type:(unsigned long long)a1;
- (id)getABInfoByKey:(id)a0;
- (void)p_configEffectABValue:(id)a0 key:(id)a1 type:(unsigned long long)a2;
- (void)configVESDKABValue:(id)a0 key:(id)a1 type:(unsigned long long)a2;
- (void)registerABTest;
- (id)requestVESDKABTestInfo;
- (void).cxx_destruct;
- (id)init;

@end
