@class NSString, AWEVideoPublishViewModel;
@protocol AWEEditKit, AEKMegaEditor, IESServiceProvider;

@interface ACCEditBgmUseCase : NSObject <ACCEditBgmUseCase>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackAddBgmStartWithMusicId:(id)a0 music:(id)a1;
- (void)musicDidDownload:(id)a0;
- (void)bgmDidAdd:(id)a0;
- (void)trackAddBgmEndWithMusicId:(id)a0 originMusic:(id)a1 success:(BOOL)a2 error:(id)a3 startTime:(double)a4;
- (void)applyBubbleWaitingBgm;
- (void)updateVideoDurationForSinglePhotoModeWithMusic:(id)a0;
- (void)addBgmWithMusicId:(id)a0 completion:(id /* block */)a1;
- (void)addBgmWithMusic:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
