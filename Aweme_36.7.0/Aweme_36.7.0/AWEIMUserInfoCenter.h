@class NSString;

@interface AWEIMUserInfoCenter : NSObject <IESIMUserServiceMessage>

@property (nonatomic) BOOL xmojiUploaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFluencyOpt;
+ (BOOL)readDiskCacheOfXmojiUploadedFlag;
+ (BOOL)readDiskCacheOfXmojiUploadedFlagForUserID:(id)a0;
+ (void)writeDiskCacheOfXmojiUploadedFlag:(BOOL)a0 userID:(id)a1;
+ (void)writeDiskCacheOfXmojiUploadedFlag:(BOOL)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateXmojiUploadedFlag:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
