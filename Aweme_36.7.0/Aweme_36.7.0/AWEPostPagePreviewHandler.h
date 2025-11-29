@class NSString, AWEPostPageContext, NSObject, AWEPostPagePreviewServiceDependencies;
@protocol AWEPublishEditServiceManagerProtocol, IESServiceProvider, AWEPostPagePreviewElementProtocol, UIViewControllerTransitioningDelegate;

@interface AWEPostPagePreviewHandler : NSObject <AWEPostPagePreviewService>

@property (retain, nonatomic) AWEPostPageContext *context;
@property (retain, nonatomic) AWEPostPagePreviewServiceDependencies *dependencies;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL isRequestingPreviewImage;
@property (nonatomic) long long configCoverAndFirstFrameCount;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (nonatomic) BOOL combinedDidDoneSignal;
@property (nonatomic) BOOL isChooseCoverForCombined;
@property (copy, nonatomic) id /* block */ chooseCoverPageWillShowBlock;
@property (copy, nonatomic) id /* block */ chooseCoverPageWillDismissBlock;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManagerForChooseCover;
@property (nonatomic) BOOL isPreviewPage;
@property (nonatomic) BOOL coverImageDoneSignal;
@property (weak, nonatomic) NSObject<AWEPostPagePreviewElementProtocol> *previewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (id)imageAlbumMixed;
- (BOOL)isImageAlbum;
- (id)editService;
- (void)bindServices:(id)a0;
- (id)aACCMidVideoCreationProtocol;
- (struct CGSize { double x0; double x1; })p_preferredImageSize;
- (BOOL)enableReeditUseNewCover;
- (void)configCoverAndFirstFrame;
- (void)configCoverImage;
- (void)chooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)a0 chooseCoverPageWillDismissBlock:(id /* block */)a1 indexForCoverEdit:(long long)a2 activeNLE:(BOOL)a3 enterMethod:(id)a4;
- (void)previewImageAtIndex:(long long)a0;
- (void)resetPreuploadTaskIfNeed;
- (BOOL)p_isAlbumVideo;
- (id)p_trackClickCover:(id)a0 onlyGetParams:(BOOL)a1;
- (void)jumpToChooseCoverVCWithPublishModel:(id)a0 editService:(id)a1 chooseCoverPageWillDismissBlock:(id /* block */)a2;
- (void)jumpToVideoCoverNLEEditorWithPublishModel:(id)a0 editService:(id)a1 dismissBlock:(id /* block */)a2;
- (void)jumpToJingXuangPublishPreview;
- (void)p_trackClickPreviewWithIndex:(long long)a0;
- (void)captureFrameAtIndexAndPresentVC:(long long)a0;
- (void).cxx_destruct;
- (void)addObservers;

@end
