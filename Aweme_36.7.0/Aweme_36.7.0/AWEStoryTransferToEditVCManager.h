@class AWEVideoPublishViewModel, NSString, AWEAssetModel, AWESingleVideoAutoClipper, UIView, NSMutableArray, AWETranslationTransitionController;
@protocol ACCPublishServiceProtocol, ACCMVTemplateManagerProtocol, AWEStudioMusicModelProtocol;

@interface AWEStoryTransferToEditVCManager : NSObject <AWEStoryTransferToEditVCManagerProtocol>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (retain, nonatomic) NSMutableArray *lastFetchingVideoAssets;
@property (retain, nonatomic) NSMutableArray *lastVideoArray;
@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationTransitionDelegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *originUploadPublishModel;
@property (nonatomic) double timeWhenPressNextBtn;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> defaultMusicForSoundSync;
@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) AWEAssetModel *selectedSingleVedio;
@property (retain, nonatomic) AWESingleVideoAutoClipper *singleVideoClipper;
@property (copy, nonatomic) id /* block */ changeiCloudDownloadingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatterForD;

- (id)shootWay;
- (void)handleVideosWithSelectedWithAssetModel:(id)a0 publishViewModel:(id)a1 fromView:(id)a2;
- (void)handleVideosWithSelectedWithAssetModel:(id)a0 publishViewModel:(id)a1 fromView:(id)a2 showDate:(BOOL)a3;
- (void)trackError:(id)a0 key:(id)a1 extraInfo:(id)a2;
- (void)fetchDefaultMusic;
- (BOOL)videoArrayIsValid:(id)a0;
- (void)openSDKhandleVideosWithSelectedWithAssetModel:(id)a0 publishViewModel:(id)a1 fromView:(id)a2 showDate:(BOOL)a3 isUsingImageAlbumMode:(BOOL)a4 successBlock:(id /* block */)a5 failedBlock:(id /* block */)a6 editVCCancelBlock:(id /* block */)a7;
- (void)p_handleVideosWithSelectedWithAssetModel:(id)a0 publishViewModel:(id)a1 fromView:(id)a2 showDate:(BOOL)a3 isUsingImageAlbumMode:(BOOL)a4 successBlock:(id /* block */)a5 failedBlock:(id /* block */)a6 editVCCancelBlock:(id /* block */)a7;
- (void)p_fetchLocationInfosWithAssetArray:(id)a0;
- (void)p_handleImageAlbumModePublishWithAssets:(id)a0 publishModel:(id)a1 successBlock:(id /* block */)a2 failedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)p_handleSelectedVideos:(id)a0 trackBlock:(id /* block */)a1;
- (void)fetchAssetsFinishedWithVideoArr:(id)a0;
- (void)showRequestAVAssetErrorToastWithInfo:(id)a0;
- (void)requestAVAssetFromiCloudWithModel:(id)a0 idx:(unsigned long long)a1 videoArr:(id)a2 assetModelArray:(id)a3;
- (void)clipCompletionWithVideoData:(id)a0 music:(id)a1 model:(id)a2 nav:(id)a3 coverImage:(id)a4 isStoryMode:(BOOL)a5;
- (void)openAIVideoClipViewControllerSourceAssetArray:(id)a0 musicList:(id)a1 initialError:(id)a2;
- (void)updateProgressWithModel:(id)a0;
- (void).cxx_destruct;

@end
