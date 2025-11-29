@class NSArray, NSString;

@interface AWEIMChatThemeUtility : NSObject <AWEIMChatThemeUtilityProtocol>

@property (copy, nonatomic) NSArray *defaultSingleChatThemeList;
@property (copy, nonatomic) NSArray *defaultGroupChatThemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getUnexpiresURLListWithURLList:(id)a0;
+ (void)requestDecryptBDImageWithURL:(id)a0 cachename:(id)a1 skey:(id)a2 complete:(id /* block */)a3;
+ (void)requestSetChatThemeWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)requestGetChatThemeWithKey:(id)a0 completion:(id /* block */)a1;
+ (id)parseChatThemeExtWithCon:(id)a0 themeKey:(id *)a1 updateTime:(long long *)a2;
+ (id)parseBackgroundV2ExtWithCon:(id)a0;
+ (BOOL)enableBubbleThemeWithMessage:(id)a0;
+ (BOOL)isHitChatThemeEntrance;
+ (BOOL)isHitChatThemeDefaultAllSet;
+ (long long)getChatThemeShowToastTimes;
+ (BOOL)isHitChatThemeBackup;
+ (BOOL)isHitChatThemeAddFriendTheme;
+ (id)chatThemeDiskCacheWithCid:(id)a0;
+ (BOOL)setChatThemeDiskCache:(id)a0 forCid:(id)a1;
+ (id)lastChatThemeExtWithCid:(id)a0;
+ (void)setLastChatThemeExt:(id)a0 forCid:(id)a1;
+ (id)lastChatBackgroundImageExtWithCid:(id)a0;
+ (void)setLastChatBackgroundImageExt:(id)a0 forCid:(id)a1;
+ (id)getChatThemeExperimentDic;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
