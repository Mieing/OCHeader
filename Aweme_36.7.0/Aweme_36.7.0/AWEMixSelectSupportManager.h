@class AWEPlayInteractionViewController, NSString, AWEListDataController, AWEAwemeModel, UIViewController;
@protocol AWEMixFeedSelectChaptersViewControllerProtocol, AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWEMixSelectSupportManager : NSObject <AWEMixSelectChaptersListDelegate, AWEMixSelectSupportManagerProtocol>

@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) UIViewController<AWEMixFeedSelectChaptersViewControllerProtocol> *mixSelectVC;
@property (weak, nonatomic) AWEPlayInteractionViewController *interactionVC;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowPanelChangeVideoWith:(id)a0;
+ (id)getDataControllerForModel:(id)a0 enterMethod:(id)a1;
+ (id)getDataControllerForModel:(id)a0;

- (BOOL)needLocatedAlignment;
- (BOOL)shouldSynchronizeDataFromOther;
- (void)mixPanelListGetProgressWillMove:(double)a0;
- (void)mixPanelListDidCancel;
- (void)mixPanelListWillClose;
- (id)getNextEpisodeModel;
- (void)trackMixPanelShowWithClickBar;
- (void)changeVideoWhenShowMixPanel:(BOOL)a0;
- (id)getPanelController;
- (double)remainScreenSize;
- (id)initWithInitialModel:(id)a0 interactionVC:(id)a1 referString:(id)a2;
- (id)initWithInitialModel:(id)a0 interactionVC:(id)a1 referString:(id)a2 enterMethod:(id)a3;
- (void)showMixSelectPanelWithLogExtraDict:(id)a0;
- (void)loadNextEpisodeWithCompletion:(id /* block */)a0;
- (void)trackCompilationNextVideoShow;
- (void)trackCompilationNextVideoClickWithClickMoment:(double)a0;
- (void).cxx_destruct;

@end
