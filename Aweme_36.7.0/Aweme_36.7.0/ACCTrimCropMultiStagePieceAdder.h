@class AWEModalTransitionDelegate, NSString, AWEVideoPublishViewModel;
@protocol ACCEditMusicServiceProtocol, ACCSelectAlbumAssetsProtocol, IESServiceProvider;

@interface ACCTrimCropMultiStagePieceAdder : NSObject <ACCSelectAlbumAssetsDelegate, ACCTrimCropPieceAddProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *workSpace;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) id<ACCSelectAlbumAssetsProtocol> albumImpl;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegateForAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)albumViewController:(id)a0 didFinishFetch:(id)a1;
- (BOOL)albumViewControllerShouldStartClipProcedure:(id)a0;
- (void)addPieceWithWorkSpace:(id)a0 serviceProvider:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkIsAllowedOpenAlbumWithServiceProvider:(id)a0;
- (void)openAlbumViewControllerWithServiceProvider:(id)a0;
- (id)unrepetselectedUploadAssets;
- (void)updateMusicListIfNeed;
- (void).cxx_destruct;

@end
