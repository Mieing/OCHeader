@interface AWEPayNFCUtils : NSObject

+ (void)transferToURLString:(id)a0 completion:(id /* block */)a1;
+ (id)queryStringToDict:(id)a0 decoded:(BOOL)a1;
+ (id)getBizKeyFromURLString:(id)a0;
+ (BOOL)isNFCUser;
+ (void)saveNFCUser;
+ (void)removeSecondPageAndLoadingAfterDelay:(double)a0;
+ (id)getDeeplinkUrlWithLaunchOptions:(id)a0;
+ (void)removeSecondPageAndLoading;
+ (id)getGurdResourceDirectoryForChannel:(id)a0;
+ (id)getTidFromUrlString:(id)a0 defaultString:(id)a1;
+ (id)urlString:(id)a0 addQueryDict:(id)a1;
+ (BOOL)isTimorUrl:(id)a0;
+ (void)removeSecondPage;
+ (void)preDownloadTimorIfNeed:(id)a0 url:(id)a1;
+ (BOOL)shouldPrepareTimorWithURL:(id)a0;
+ (void)removeNFCLoading;
+ (BOOL)p_revertURLAppendStrategy;
+ (BOOL)p_checkUrlShouldPreload:(id)a0;
+ (BOOL)shouldPreDownloadTimorPKGWithURL:(id)a0;
+ (id)mpIDToSchema:(id)a0;

@end
