@class NSString, NSMutableDictionary, UIImage, NSObject, VEScan;
@protocol OS_dispatch_queue;

@interface AWEPluginClientAICustomImpl : NSObject <BDPClientAIQRDetectPluginDelegate, VEScanDelegate> {
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSMutableDictionary *_qrcodeImageCacheDict;
    NSMutableDictionary *_qrcodeImageCompletionDict;
    NSString *_executePagePath;
}

@property (retain, nonatomic) VEScan *scanSession;
@property (retain, nonatomic) UIImage *scanInputImage;
@property (nonatomic) BOOL needResetQRCodeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)scan:(id)a0 onScanCompleteWithQRCodeResult:(id)a1;
- (void)p_realReleaseQRCodeService;
- (void)bdp_runQRCodeRecognizerWithInputImage:(id)a0 pagePath:(id)a1 completion:(id /* block */)a2;
- (void)bdp_registerQRCodeServiceWithCallback:(id /* block */)a0;
- (void)bdp_releaseQRCodeService;
- (void)bdp_runQRCodeRecognizerWithInputImage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
