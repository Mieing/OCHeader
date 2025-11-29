@class NSURLSession, NSArray, NSString, NSMutableSet, MPPageFastLoadWXPicDecoder, NSObject;
@protocol OS_dispatch_queue, MPPageFastLoadImageSchemeHandlerDelegate, OS_dispatch_semaphore;

@interface MPPageFastLoadImageSchemeHandler : NSObject <WKURLSchemeHandler>

@property (retain, nonatomic) NSURLSession *imageRequestSession;
@property (retain, nonatomic) NSMutableSet *ongoingTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *decodeSemaphore;
@property (retain, nonatomic) MPPageFastLoadWXPicDecoder *wxPicDecoder;
@property (copy, nonatomic) NSArray *preloadImageIDs;
@property (weak, nonatomic) id<MPPageFastLoadImageSchemeHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fixSchemeIfNeedForURL:(id)a0 originScheme:(id)a1;
+ (id)createOnlineRequestURLForURL:(id)a0;
+ (BOOL)isURLSupportWxPic:(id)a0;

- (id)customScheme;
- (id)init;
- (void)loadPreloadImageIDsWithPageURL:(id)a0;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)getImageFromCacheIfNeedForTask:(id)a0 pageDataKeyURL:(id)a1;
- (void)fallbackToOnlineRequestForTask:(id)a0 pageDataKeyURL:(id)a1 shouldSaveCache:(BOOL)a2;
- (id)getImageContentTypeFromTask:(id)a0;
- (id)getImageTypeFromTask:(id)a0;
- (id)createSuccessResponseForImageData:(id)a0 contentType:(id)a1 url:(id)a2 headers:(id)a3;
- (id)create404ResponseForURL:(id)a0;
- (void)finishTask:(id)a0 withError:(id)a1;
- (void)finishTask:(id)a0 withResponse:(id)a1 data:(id)a2;
- (void)decodeAndFinishForTask:(id)a0 imageData:(id)a1 serverContentType:(id)a2 originHeaders:(id)a3 saveContext:(id)a4;
- (BOOL)canUseExternalCoverImageForURL:(id)a0;
- (void)reportCacheAction:(unsigned int)a0;
- (void).cxx_destruct;

@end
