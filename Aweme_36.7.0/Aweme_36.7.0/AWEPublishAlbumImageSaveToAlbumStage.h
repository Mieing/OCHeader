@class AWEVideoPublishViewModel;
@protocol ACCImageAlbumSaveAsVideoPip;

@interface AWEPublishAlbumImageSaveToAlbumStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) long long contentSourceType;
@property (retain, nonatomic) id awemeModel;
@property (retain, nonatomic) id<ACCImageAlbumSaveAsVideoPip> saveAsVideoPip;

- (void)p_setup;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)p_handleStageDone;
- (BOOL)p_isSavePhotoToAlbum;
- (BOOL)handlePhotoNotAuthorized;
- (id)initWithPublishModel:(id)a0 awemeModel:(id)a1 contentSourceType:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
