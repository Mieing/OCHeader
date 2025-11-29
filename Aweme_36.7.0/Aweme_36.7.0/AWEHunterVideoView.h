@class AWEAwemeModel, HunterVideoAWEPlayVideoDelegate, HunterVideoIESVideoPlayerDelegate, NSString, HunterVideoAWEPlayInteractionViewControllerNewProtocol, UIImageView, NSDictionary, HunterVideoAWEPlayVideoViewControllerStatusDelegate, HunterVideoInteractionDelegate, UIViewController;
@protocol HunterVideoViewDelegate, AWEDPlayerFeedViewControllerProtocol;

@interface AWEHunterVideoView : UIView <IESVideoPlayerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isPlayCalled;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (weak, nonatomic) id<HunterVideoViewDelegate> delegate;
@property (retain, nonatomic) HunterVideoAWEPlayVideoDelegate *hunterVideoAWEPlayVideoDelegate;
@property (retain, nonatomic) HunterVideoIESVideoPlayerDelegate *hunterVideoIESVideoPlayerDelegate;
@property (retain, nonatomic) HunterVideoAWEPlayVideoViewControllerStatusDelegate *hunterVideoAWEPlayVideoViewControllerStatusDelegate;
@property (retain, nonatomic) HunterVideoAWEPlayInteractionViewControllerNewProtocol *hunterVideoAWEPlayInteractionViewControllerNewProtocol;
@property (retain, nonatomic) HunterVideoInteractionDelegate *hunterVideoInteractionDelegate;
@property (retain, nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> *playVideoViewController;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (BOOL)playWithAnimation;
- (void)setCoverImage:(id)a0;
- (void)updateLogExtra:(id)a0;
- (void)updateBusinessDelegateWithMediaModel:(id)a0;
- (void)didExitLandscapeFeed;
- (void)willEnterLandscapeFeed;
- (id)playVideoViewControllerForBusiness;
- (void).cxx_destruct;
- (BOOL)play;
- (void)pause;
- (void)stop;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
