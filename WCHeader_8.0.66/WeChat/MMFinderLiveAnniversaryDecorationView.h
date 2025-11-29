@class PAGView, NSString, MMFinderLiveAnniversaryDecorationViewModel;

@interface MMFinderLiveAnniversaryDecorationView : MMLiveBaseComponentView <PAGViewListener>

@property (retain, nonatomic) PAGView *decorationView;
@property (retain, nonatomic) MMFinderLiveAnniversaryDecorationViewModel *viewModel;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *currentUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)layoutUI;
- (void)stopAnimation;
- (void)setupDecorationView;
- (void)decorationViewPlay;
- (void)playEnd;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void).cxx_destruct;

@end
