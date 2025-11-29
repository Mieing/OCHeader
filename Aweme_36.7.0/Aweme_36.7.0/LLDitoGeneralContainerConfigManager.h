@class NSMutableDictionary;

@interface LLDitoGeneralContainerConfigManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyToConfigDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)registerConfig:(id)a0;
- (id)configForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
