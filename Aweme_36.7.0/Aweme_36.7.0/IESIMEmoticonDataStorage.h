@class NSString, IESIMEmoticonConfig;

@interface IESIMEmoticonDataStorage : NSObject <IESIMUserServiceMessage>

@property (copy, nonatomic) NSString *currentLoginUser;
@property (retain, nonatomic) IESIMEmoticonConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (id)recentlyUsedEmoticons;
- (void)resetRecentlyUsedEmoticons:(id)a0;
- (id)p_recentlyUsedTitleKey;
- (id)p_recentlyUsedKey;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
