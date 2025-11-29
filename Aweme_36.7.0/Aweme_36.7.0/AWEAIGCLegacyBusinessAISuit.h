@class AWEAIGCLegacyBusinessContext, NSString;

@interface AWEAIGCLegacyBusinessAISuit : NSObject <AWEAIGCLegacyBusinessAISuitProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applySuiteEffect;
- (void)handleAISuiteTypeWithEffect:(id)a0;
- (void)handleAISuitesEffectListPanelKey:(id)a0 withCategoryKey:(id)a1 withCommonID:(id)a2;
- (BOOL)handleAISuitMessageResponseIfNeeded:(id)a0;
- (BOOL)handleAISuitApplyEffectIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)effect;
- (id)repository;

@end
