@class NSString, NSMutableArray, NSMutableSet;

@interface MPEmoticonSchemeHandler : NSObject <IStoreEmotionSingleDownloadMgrExt, WKURLSchemeHandler>

@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMutableSet *observingMD5s;
@property (copy, nonatomic) id /* block */ checkSchemePermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scheme;
- (id)init;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (id)create404ResponseForURL:(id)a0;
- (void)stopTask:(id)a0 withError:(id)a1;
- (void)finishTask:(id)a0 withData:(id)a1;
- (void)startDownloadEmoji:(id)a0 emojiInfoObj:(id)a1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
