@class NSString, UIView;
@protocol AWENearbySocialTagsViewProtocol;

@interface AWEPlayInteractionSocialTagsElement : AWEPlayInteractionLeftElement <AWEUserMessage, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWENearbySocialTagsViewProtocol> *socialTagsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)__setupUI;
- (void)__updateSocialTag;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
