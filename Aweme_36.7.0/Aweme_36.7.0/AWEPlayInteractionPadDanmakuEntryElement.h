@class NSString, AWEPlayInteractionPadDanmakuEntryElementViewModel, UIView;
@protocol AWEPadDanmakuEntryViewProtocol;

@interface AWEPlayInteractionPadDanmakuEntryElement : AWEPlayInteractionLeftElement <AWEPadDanmakuEntryDelegate>

@property (retain, nonatomic) UIView<AWEPadDanmakuEntryViewProtocol> *padDanmakuEntryView;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWEPlayInteractionPadDanmakuEntryElementViewModel *viewModel;
@property (nonatomic) BOOL hasOuterPageContextHandler;
@property (copy, nonatomic) id /* block */ didUpdateHiddenBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadTabBarAdapterClass;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)aAWEPadModuleAdapter;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)aAWEPadTabBarAdapter;
- (void)didTapDanmakuInputView;
- (void)didTapDanmakuIcon;
- (void)danmakuStatusChange:(BOOL)a0;
- (void)showPadDanmakuEntry:(BOOL)a0 duration:(double)a1 completed:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)context;

@end
