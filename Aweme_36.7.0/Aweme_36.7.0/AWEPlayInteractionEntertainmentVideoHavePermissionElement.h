@class AWEEntertainmentVideoHavePermissionTagView, NSString;
@protocol AWEEntertainmentHavePermissionPresenterProtocol;

@interface AWEPlayInteractionEntertainmentVideoHavePermissionElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (weak, nonatomic) AWEEntertainmentVideoHavePermissionTagView *havePermissionTagView;
@property (retain, nonatomic) id<AWEEntertainmentHavePermissionPresenterProtocol> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)createPresenter;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
