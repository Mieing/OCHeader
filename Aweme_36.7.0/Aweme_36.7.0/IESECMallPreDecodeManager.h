@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSLock;

@interface IESECMallPreDecodeManager : NSObject <LynxResourceProvider>

@property (retain, nonatomic) NSMutableDictionary *bundleDict;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSDictionary *preDecodeConfig;
@property (nonatomic) long long defaultVMCount;
@property (nonatomic) BOOL enablePreDecodeFromCache;
@property (copy, nonatomic) NSArray *customCardsTemplates;
@property (copy, nonatomic) NSArray *commonComponentsTemplates;
@property (copy, nonatomic) NSDictionary *cardsComponentsTemplates;
@property (copy, nonatomic) NSDictionary *decodeTemplate;
@property (copy, nonatomic) NSDictionary *decodeComponentsTemplate;
@property (copy, nonatomic) NSArray *decodeTemplatePageNames;
@property (copy, nonatomic) NSArray *decodeComponentsTemplatePageNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTemplateBundle:(id)a0 poolSize:(long long)a1;
+ (id)sharedManager;

- (void)request:(id)a0 onComplete:(id /* block */)a1;
- (void)setupPreDecodeWithConfig:(id)a0;
- (void)triggerCardsTemplateWith:(id)a0;
- (id)safeGetComponentsPreDecodeBundleWithUrlString:(id)a0 extra:(id)a1;
- (id)safeGetCardsPreDecodeBundleWithUrlString:(id)a0 extra:(id)a1;
- (id)preDecodeItemFrom:(id)a0;
- (void)executePreDecodeWith:(id)a0;
- (void)safeSaveTemplateBundle:(id)a0 itemUrl:(id)a1;
- (void).cxx_destruct;
- (void)cancel:(id)a0;

@end
