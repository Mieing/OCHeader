@class NSString, AWERelatedAdLongVideoAdapter, AWEBDALokiManager, AWEAwemeModel;

@interface AWEAdLongVideoBannerManager : NSObject <BDALokiManagerDelegate, AWEAdLongVideoBannerManager> {
    AWEBDALokiManager *_adLokiManager;
    AWERelatedAdLongVideoAdapter *_adAdapter;
    BOOL _hasPreBanner;
}

@property (retain, nonatomic) AWEAwemeModel *adBannerAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ receiveAdDataBlock;
@property (copy, nonatomic) id /* block */ bannerUIDidChangeBlock;
@property (copy, nonatomic) id /* block */ bannerDidDisappearBlock;
@property (copy, nonatomic) id /* block */ bannerShowBlock;

+ (BOOL)canAdBannerShowInLongVideo:(id)a0;

- (id)lynxBridge;
- (void)lokiComponentDowngrade:(id)a0 errorMsg:(id)a1;
- (void)lokiShowFinish:(id)a0;
- (void)lokiClose:(id)a0;
- (void)lokiComponent:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)getLynxGlobalProps:(id)a0;
- (void)startFetchLongVideoAdBannerData:(id)a0;
- (void)loadAdBannerWithContainer:(id)a0 hasPreBanner:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
