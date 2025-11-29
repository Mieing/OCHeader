@class AWEAwemeModel, NSString, AWEGradientView, NSDictionary, AWESearchImageSetView, AWEOriginalAdModel, UIButton, UIViewController, AWESearchTracker;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWESearchAlbumAutoPlayCellController : UIViewController <AWEPlayVideoViewControllerStatusDelegate, AWEPlayVideoDelegate, IESVideoPlayerDelegate, AWESearchHorizontalAutoPlayCellProtocol>

@property (nonatomic) BOOL active;
@property (retain, nonatomic) AWESearchImageSetView *imageSetView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWESearchTracker *searchTracker;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (copy, nonatomic) id /* block */ playerWillStartNextLoop;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)resetLivePlayer;
- (void)trackSearchResultClick:(id)a0;
- (void)setupSubViews;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)transitionContext;
- (void)reset;
- (void)didResignActive;
- (void)viewDidLoad;
- (BOOL)isActive;
- (void)updateModel:(id)a0;

@end
