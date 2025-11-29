@class BDWebImageRequest, NSString, UIImage, IESEffectModel, AWEVideoPublishCustomizedCoverViewModel;
@protocol ACCEditServiceProtocol, ACCVideoEditFlowControlService;

@interface ACCVideoEditCoverFeatureComponent : ACCFeatureComponent <AWETextTemplateDownloadObserverProtocol, ACCVideoEditCoverFeatureService, ACCVideoEditFlowControlSubscriber>

@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) UIImage *chooseImage;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) IESEffectModel *sticker;
@property (copy, nonatomic) NSString *stickerExtraParams;
@property (retain, nonatomic) BDWebImageRequest *coverRequest;
@property (retain, nonatomic) BDWebImageRequest *backgroundRequest;
@property (nonatomic) double requestStart;
@property (nonatomic) double coverRequestTime;
@property (nonatomic) double backgroundRequestTime;
@property (nonatomic) double effectRequestTime;
@property (nonatomic) unsigned long long errorType;
@property (retain, nonatomic) AWEVideoPublishCustomizedCoverViewModel *currentCoverModel;
@property (nonatomic) BOOL requestFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEnterPublishWithEditFlowService:(id)a0;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1 extraParams:(id)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (id)publishModel;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)setupThirdPartCoverIfNeeded;
- (void)configCustomVideoCover:(id)a0;
- (BOOL)isCoverModelValid:(id)a0;
- (void)trackCustomCoverFailedWithCoverModel:(id)a0 requestTime:(double)a1;
- (BOOL)isBackgroundInfoValid:(id)a0;
- (void)cancelCustomCoverRequest;
- (void)configCustomVideoCover;
- (void)clearCoverModel;
- (void)trackCustomCoverFailedWithCoverModel:(id)a0 errorMsg:(id)a1;
- (void)trackCustomCoverSuccessWithCoverModel:(id)a0;
- (id)coverToolsInfoForCustomCoverModel:(id)a0;
- (void)configCustomVideoSticker;
- (id)commonCustomCoverParamsWithModel:(id)a0;
- (void).cxx_destruct;

@end
