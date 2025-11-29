@class WeiboSDK3rdApp, NSString, NSDictionary;

@interface WBDataTransferObject : NSObject

@property (retain, nonatomic) WeiboSDK3rdApp *app;
@property (retain, nonatomic) NSString *sdkVersion;
@property (nonatomic) BOOL pasteBoardUnenable;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL shouldOpenWeiboAppInstallPageIfNotInstalled;

+ (id)mappedObjectWithDictionary:(id)a0;
+ (id)unSupportedObjectFromPasteboard;
+ (id)openWeiboAppSchemeWithID:(id)a0;
+ (id)open3rdAppSchemeWithID:(id)a0 appKey:(id)a1;
+ (id)objectFromPasteboardWithID:(id)a0 sdkVersion:(id)a1 url:(id)a2;
+ (id)objectFormSchemeUrl:(id)a0 sdkID:(id)a1 sdkVersion:(id)a2;
+ (id)UUID;
+ (id)transferType;

- (id)validateUserInfo;
- (id)appAttachment;
- (id)open3rdAppSchemeWithAppKey:(id)a0;
- (id)validateBeforeSend;
- (id)validateAfterReceive;
- (id)transferObjectsForPasteboard;
- (id)transferObjectForattachment;
- (id)openWeiboAppScheme;
- (id)openWeiboAppUniversalLink;
- (id)open3rdAppUniversalLink:(id)a0 withAppKey:(id)a1;
- (void)removeFromPasteboard;
- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void)setObjectID:(id)a0;
- (void).cxx_destruct;
- (id)validate;
- (id)objectID;
- (id)init;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
