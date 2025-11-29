@class MMMusicEditVideoPlayerContainerView, UIView, NSString, MMMusicLiveLyricDisplayView, MMMusicEditVideoCellModel, AVAsset, MMMusicFinderVideoDownloadHelper, MMMusicEditVideoCropView, MMTimer;
@protocol MMMusicEditVideoCellViewDelegate;

@interface MMMusicEditVideoCellView : MMUIView <MMMusicEditVideoCropViewDelegate, IMMMusicLyricServiceExt, MMMusicFinderVideoDownloadHelperDelegate>

@property (retain, nonatomic) UIView *videoCropAreaContainerView;
@property (retain, nonatomic) MMMusicEditVideoPlayerContainerView *videoPlayerContainerView;
@property (retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView;
@property (retain, nonatomic) MMMusicEditVideoCropView *videoCropView;
@property (retain, nonatomic) MMMusicEditVideoCellModel *editModel;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) MMTimer *musicTimer;
@property (retain, nonatomic) AVAsset *curCropAsset;
@property (nonatomic) double cropStartTimeInSecond;
@property (nonatomic) double cropEndTimeInSecond;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) MMMusicFinderVideoDownloadHelper *downloadHelper;
@property (retain, nonatomic) NSString *curDownloadTid;
@property (retain, nonatomic) NSString *formatVideoPath;
@property (nonatomic) BOOL isDownloadSuccess;
@property (weak, nonatomic) id<MMMusicEditVideoCellViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andSongId:(id)a1;
- (void)dealloc;
- (void)resetTimer;
- (void)setupSubviews;
- (void)layoutSubviews;
- (BOOL)isCropped;
- (void)setEditVideoCellModel:(id)a0 isPlayVideoImmediately:(BOOL)a1;
- (void)initAndStartPlayVideoWithVideoCropView:(id)a0;
- (void)updateEditVideoCellModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borrowVideoPlayerContainerViewFrame;
- (id)borrowVideoCropView;
- (void)pause;
- (void)resume:(unsigned int)a0;
- (void)playVideoAndLoadLocalImageInSlider:(BOOL)a0;
- (void)playVideo;
- (void)loadLocalImageSlider:(BOOL)a0;
- (void)seekMusicAndVideo;
- (void)initAndSeekMusic;
- (void)onNeedToSeekMusicToStartTime;
- (void)musicEditVideoCropViewDidChangeCropTimeRangeWithStartTime:(double)a0 endTime:(double)a1 editAssetIndex:(long long)a2;
- (void)musicEditVideoCropView:(id)a0 valueDidChange:(double)a1 currentEditIndex:(long long)a2;
- (void)musicEditVideoCropView:(id)a0 didClickCloseBtnWithEditIndex:(long long)a1 withOriginStartTime:(double)a2 originEndTime:(double)a3;
- (void)musicEditVideoCropView:(id)a0 didClickDoneBtnWithEditIndex:(long long)a1;
- (id)genLocalThumbPathInPos:(double)a0;
- (void)onLyricService:(id)a0 curentLyricChangeTo:(id)a1 timeToNext:(double)a2 currIndex:(unsigned int)a3;
- (void)onDownloadFinishWithTid:(id)a0;
- (void)onDownloadFail;
- (void).cxx_destruct;

@end
