@class AFDFrequencyRuleGroup, NSMutableDictionary, AFDFastCommentDormancyConfig, NSMutableSet, NSString;

@interface AFDFastCommentDormancy : NSObject <AFDFastCommentDormantProtocol>

@property (retain, nonatomic) AFDFastCommentDormancyConfig *config;
@property (retain, nonatomic) NSMutableSet *awemeCountCache;
@property (retain, nonatomic) NSMutableDictionary *uidRuleCache;
@property (retain, nonatomic) AFDFrequencyRuleGroup *globalRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setupWithConfig:(id)a0;
- (BOOL)isDormantWithAweme:(id)a0;
- (void)addCountWithAweme:(id)a0;
- (void)resetWithAweme:(id)a0;
- (id)authorRuleWithUID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
