@class NSString, NSOperationQueue;

@interface WBSDKToolsManager : NSObject

@property (retain, nonatomic) NSString *weiboSDKAppKey;
@property (retain, nonatomic) NSString *weiboSDKUniversalLink;
@property (retain, nonatomic) NSString *openWeiboUniversalLinkHost;
@property (retain, nonatomic) NSOperationQueue *async_sdk_queue;

+ (id)serializeURLString:(id)a0 withParams:(id)a1;
+ (id)queryValueWithName:(id)a0 urlString:(id)a1;
+ (id)toolsManager;
+ (id)_topViewController:(id)a0;
+ (id)baseCacheShareFilePath;
+ (id)cacheUUID;
+ (BOOL)verifySafetyData:(id)a0;
+ (id)getDecodeClasss;
+ (id)queryDictionaryOfURLQuery:(id)a0;
+ (id)dictionaryFromJson:(id)a0;
+ (id)jsonFromObj:(id)a0;
+ (void)sdk_dispatch_async:(id /* block */)a0;
+ (id)getCreateCacheFilePath;
+ (id)writeCacheShareFileData:(id)a0;
+ (void)removeAllCacheShareCacheFile;
+ (BOOL)isSupportUniversalLink;
+ (void)linkToUser:(id)a0 appKey:(id)a1;
+ (void)linkToSingleBlog:(id)a0 blogID:(id)a1 appKey:(id)a2;
+ (void)linkToArticle:(id)a0 appKey:(id)a1;
+ (void)shareToWeibo:(id)a0 appKey:(id)a1;
+ (void)commentToWeibo:(id)a0 appKey:(id)a1;
+ (void)linkToSearch:(id)a0 appKey:(id)a1;
+ (void)linkToTimeLineAppKey:(id)a0;
+ (void)linkToProfileAppKey:(id)a0;
+ (BOOL)isWeiboAppInstalled;
+ (BOOL)isSupportWeibosdkOpenURL3_3;
+ (id)readCacheShareDataFilePath:(id)a0;
+ (id)writeCacheShareFileData:(id)a0 fileFormat:(id)a1;
+ (id)UUID;
+ (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)sharedInstance;
+ (id)topViewController;
+ (id)activityViewController;

- (void).cxx_destruct;

@end
