@class NSString, UIViewController;
@protocol RTVUserProfileManagerInterface, AWELiveAcqCastVideoViewModelProtocol, RTVInteractionFunctionContentDelegate, RxInjector, AWEVideoHallFeedShareViewControllerProtocol;

@interface AWERTVLongVideoTheaterViewController : UIViewController <AWEVideoHallViewControllerDelegate, RTVInteractionFunctionContentProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (retain, nonatomic) UIViewController<AWEVideoHallFeedShareViewControllerProtocol> *videoHallViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionFunctionContentDelegate> delegate;

- (void)rxAwakeFromPropertyInjection;
- (void)renderViewModel:(id)a0;
- (id)__createDataController;
- (void)clickAlbum:(id)a0;
- (void)clickAweme:(id)a0;
- (void)selectLongVideo:(id)a0 withParams:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
