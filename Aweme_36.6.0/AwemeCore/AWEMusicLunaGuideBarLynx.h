@class BDXContext, NSDictionary, NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEMusicLunaGuideBarLynx : AWEMusicLunaGuideBarView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bannerLynxView;
@property (retain, nonatomic) BDXContext *lynxContext;
@property (retain, nonatomic) NSDictionary *globalPro;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMainButtonTitle:(id)a0;
- (id)initWithGlobalProps:(id)a0;
- (void).cxx_destruct;
- (void)setSubTitle:(id)a0;
- (void)setMainTitle:(id)a0;
- (void)setUpUI;

@end
