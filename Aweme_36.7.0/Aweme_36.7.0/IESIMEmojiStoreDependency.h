@class NSString;

@interface IESIMEmojiStoreDependency : NSObject <IESIMEmojiStoreDependency>

@property (retain, nonatomic) NSString *aimojiRootDir;
@property (retain, nonatomic) NSString *subscribeEmojiRootDir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)p_setupDirectories;
- (BOOL)enableAIEmoticon;
- (id)getAImojiPackPath:(id)a0;
- (id)transformToAIInfoModelWithPackage:(id)a0;
- (id)transformToAIThemeModelWithPackage:(id)a0;
- (id)aiEmoticonModelFromDictionary:(id)a0;
- (void)updatedAIPackagesIfNeededWithNewPackages:(id)a0;
- (id)transformToPetELFInfoModelWithPackage:(id)a0;
- (id)transformToPetELFThemeModelWithPackage:(id)a0;
- (void)updatedPetELFPackagesIfNeededWithNewPackages:(id)a0;
- (id)getSubscribEmojiPackPath:(id)a0;
- (id)transformToSubscribeInfoModelWithPackage:(id)a0;
- (id)transformToSubscribeThemeModelWithPackage:(id)a0;
- (id)subscribeEmoticonModelFromDictionary:(id)a0;
- (void)updatedSubScribePackagesIfNeededWithNewPackages:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
