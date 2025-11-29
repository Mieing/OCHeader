@class NSDictionary, NSString, UIView;
@protocol HunterContainerProtocol;

@interface AWEMusicLunaGuideBarHunter : AWEMusicLunaGuideBarView <HunterContainerLifeCycleProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *bannerHunterView;
@property (retain, nonatomic) NSDictionary *globalPro;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_bannerLynxUrl;

- (void)setMainButtonTitle:(id)a0;
- (id)initWithStyle:(unsigned long long)a0 globalProps:(id)a1;
- (void).cxx_destruct;
- (void)setSubTitle:(id)a0;
- (void)setMainTitle:(id)a0;
- (void)setUpUI;

@end
