@class NSString, NSMutableDictionary, WKWebView, EmoticonUploader;

@interface WCTopicSearchActionLogic : MMObject <PBMessageObserverDelegate, IStoreEmotionSingleDownloadMgrExt> {
    EmoticonUploader *_uploader;
}

@property (retain, nonatomic) NSMutableDictionary *dictEmotionRequestWrappers;
@property (weak, nonatomic) WKWebView *resultWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isStoreEmoticon:(unsigned int)a0;
+ (BOOL)isCustomEmoticon:(unsigned int)a0;

- (id)init;
- (void)dealloc;
- (void)cancelAllRequest;
- (void)requestSearchShareDataFromSearchParams:(id)a0 resultBlock:(id /* block */)a1;
- (void)requestEmoticonSearchShareDataFromSearchParams:(id)a0 resultBlock:(id /* block */)a1;
- (void)requestSearchShareDataFromSearchParams:(id)a0 requestWrapper:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetSearchShareResponseWraper:(id)a0;
- (void)handleGetTopicSearchShareResponseWraper:(id)a0 wrapper:(id)a1;
- (void)handleGetEmoticonSearchShareResponseWraper:(id)a0 wrapper:(id)a1;
- (void)genWeappPageMsgWrapFromWeAppShare:(id)a0 requestWrapper:(id)a1;
- (void)shareWeappPageWithThumbUrl:(id)a0 weAppShare:(id)a1 requestWrapper:(id)a2;
- (void)shareWeappPageWithSnapRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 weAppShare:(id)a1 requestWrapper:(id)a2;
- (id)snapShotWebviewImageIniOS10WithSnapRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)downloadEmotionData:(id)a0 requestWrapper:(id)a1;
- (void)downloadLiteAppThumbnail:(id)a0;
- (void)genEmotionMsgWrapFromSearchResponseShare:(id)a0 imageData:(id)a1 requestWrapper:(id)a2;
- (void)downloadStoreEmotion:(id)a0 requestWrapper:(id)a1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
