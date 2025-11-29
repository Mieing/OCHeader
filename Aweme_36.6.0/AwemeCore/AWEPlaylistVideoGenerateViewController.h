@class AWEPlaylistVideoGenerateInfo, NSString, AWEPlaylistInfoModel, UIImageView, UIButton, NSDictionary, LOTAnimationView, UIVisualEffectView, AWEStudioRepoCommercialAnchorModel, UILabel;

@interface AWEPlaylistVideoGenerateViewController : UIViewController <UINavigationControllerDelegate>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *progressDetailLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (retain, nonatomic) AWEStudioRepoCommercialAnchorModel *anchorModel;
@property (retain, nonatomic) AWEPlaylistVideoGenerateInfo *generateInfo;
@property (nonatomic) double startTime;
@property (nonatomic) double downloadDuration;
@property (nonatomic) BOOL needSkipNavgation;
@property (nonatomic) BOOL needDelayStartVideoEidt;
@property (nonatomic) BOOL viewDidAppeared;
@property (nonatomic) long long retryCount;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSDictionary *anchorCreatePlaylistTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadVideo;
- (id)initWithPlaylistInfo:(id)a0 anchorModel:(id)a1;
- (void)generateVideo;
- (void)startVideoEditViewController;
- (BOOL)skipnNvigationViewControllers;
- (void)fakeIncreaseProgress;
- (void)generateCancel:(unsigned long long)a0;
- (void)checkGenerateStatus;
- (void)backButtonClick:(id)a0;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
