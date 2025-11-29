@class NSString;

@interface AWEIMPetELFUtils : NSObject <AWEIMPetELFUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformToThemeModelWithPackage:(id)a0;
+ (id)emoticonModelFromDictionary:(id)a0;
+ (id)transformToInfoModelWithPackage:(id)a0;
+ (id)themeMolde;
+ (void)requestPetELFDataSourceWithRequestContext:(id)a0 completion:(id /* block */)a1;
+ (id)getEmotionModelWithConversation:(id)a0 displayName:(id)a1;
+ (void)transferToPetELFUpdatePageWithConShortID:(id)a0 conID:(id)a1;
+ (void)transferToPetELFAddPageWithConShortID:(id)a0 conID:(id)a1 enterSource:(id)a2;
+ (id)shareInstance;

- (void)removeAllCache;
- (void)addPetELFEmoticonWithConShortID:(id)a0 completion:(id /* block */)a1;
- (void)updatePetELFEmoticonWitnConShortID:(id)a0 version:(id)a1 emoticonModelArr:(id)a2;
- (BOOL)hasAddPetELFEmoticon;
- (BOOL)petELFEmoticonStatusError;
- (BOOL)hasPetELFWithConversation:(id)a0;
- (BOOL)getPetELFEntranceEnable;
- (BOOL)getPetELFCacheEnable;
- (long long)getPetELFRefreshCount;
- (double)getPetELFRefreshInterval;
- (id)getPetELFBlackList;
- (id)getPetELFEntranceSettingsDic;
- (id)getPetELFRefreshSettingsDic;

@end
