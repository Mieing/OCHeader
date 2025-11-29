@class AWEIMXmojiInfo, NSString;

@interface AWEIMXmojiDataManager : NSObject <AWEUserMessage, IESIMXmojiInterface, AWEIMXmojiManagerProtocol>

@property (retain, nonatomic) AWEIMXmojiInfo *xmojiInfo;
@property (nonatomic) BOOL forceUpdateXmojiInfoOnAppSwitchBackFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)commentXmojiEnabled;
- (void)updateXmojiInfoIfNeededOnCompletion:(id /* block */)a0;
- (void)forceUpdateXmojiInfoOnAppSwitchBack;
- (BOOL)userHasXmojis;
- (void)writeXmojiInfoLastReqTimestamp:(id)a0 userID:(id)a1;
- (id)themeModelForXmojiInfo:(id)a0;
- (BOOL)imInputXmojiEnabled;
- (BOOL)xmojiFooterEnabled;
- (BOOL)collectXmojiEnabled;
- (BOOL)forwardXmojiEnabled;
- (id)p_readDiskCacheOfXmojiInfoForUserID:(id)a0;
- (BOOL)p_exceedReqInterval;
- (void)updateXmojiInfoOnCompletion:(id /* block */)a0;
- (void)p_appWillEnterForegroundNoti:(id)a0;
- (id)p_readXmojiInfoLastReqTimestampForUser:(id)a0;
- (long long)p_xmojiInfoReqInterval;
- (void)p_writeDiskCacheOfXmojiInfo:(id)a0 userID:(id)a1;
- (void)p_requestXmojiConfigOnCompletion:(id /* block */)a0;
- (id)p_transformServerDataIntoClientData:(id)a0;
- (id)p_emoticonModelForXmojiStickerInfo:(id)a0;
- (BOOL)xmojiManagerHasXmojiList;
- (void).cxx_destruct;
- (id)init;
- (BOOL)featureEnabled;
- (void)dealloc;
- (void)p_registerNotifications;

@end
