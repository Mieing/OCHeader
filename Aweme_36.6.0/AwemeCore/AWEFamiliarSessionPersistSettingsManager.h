@class NSString, NSDictionary;

@interface AWEFamiliarSessionPersistSettingsManager : NSObject <AWEFamiliarSessionPersistSettingsManagerProtocol, AWEUserMessage, AWEFamiliarSettingsSubscriber>

@property (readonly, nonatomic) BOOL isCFStoryNewStyle;
@property (readonly, nonatomic) BOOL shouldShowCommentObd;
@property (readonly, nonatomic) BOOL isMomentTabMigratedOnServerSide;
@property (readonly, nonatomic) long long momentMigrationType;
@property (readonly, nonatomic) BOOL isMomentStoryAssetsMigrated;
@property (readonly, nonatomic) long long momentStoryMerge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isPersistant;
@property (retain, nonatomic) NSDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateFamiliarSettings:(id)a0 fromRequest:(BOOL)a1;
- (id)aAWEMainModuleServiceDOUYINLGAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
