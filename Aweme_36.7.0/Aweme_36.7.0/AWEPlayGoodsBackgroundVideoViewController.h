@class UIImageView, NSString, AWEAwemeGoodsInfo;
@protocol IESVideoPlayerProtocol;

@interface AWEPlayGoodsBackgroundVideoViewController : UIViewController <IESVideoPlayerDelegate>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> videoPlayer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEAwemeGoodsInfo *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)updateCoverImage;
- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)viewDidLoad;
- (void)setupUI;
- (void)prepareToPlay;

@end
