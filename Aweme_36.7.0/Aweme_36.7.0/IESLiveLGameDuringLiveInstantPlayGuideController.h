@class NSString, IESLiveLGameDuringLiveInstantPlayGuideView;

@interface IESLiveLGameDuringLiveInstantPlayGuideController : IESLiveLGameMaskController <IESLiveLGameDuringLiveInstantPlayGuideViewDelegate>

@property (weak, nonatomic) IESLiveLGameDuringLiveInstantPlayGuideView *instantPlayGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowInstantPlayGuide:(id)a0;
+ (void)showInstantPlayGuide:(id)a0 parentVC:(id)a1 attachingContext:(id)a2;
+ (void)preloadIfNeed:(id)a0;
+ (id)guideBackgroundImageUrl;

- (id)initWithAttachingContext:(id)a0;
- (void)guideViewDidClickBlankButton:(id)a0;
- (void)guideViewDidClickCloseButton:(id)a0;
- (void)guideViewDidClickIKnownButton:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
