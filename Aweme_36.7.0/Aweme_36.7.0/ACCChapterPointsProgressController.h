@class ACCGradientView, UIView, UISlider, ACCChapterVideoToolBar, NSMutableArray, UIViewController, DVETrackPanelContext, DVEVCContext, AWEDemaciaChapterProgressSlider;
@protocol ACCChapterVideoToolBarDelegate;

@interface ACCChapterPointsProgressController : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) ACCGradientView *topContainerView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) ACCChapterVideoToolBar *toolsView;
@property (retain, nonatomic) UISlider *progressSlider;
@property (retain, nonatomic) NSMutableArray *progressSliderChapterPoints;
@property (nonatomic) BOOL showChapterProgressBar;
@property (nonatomic) BOOL showChapterProgressBarButton;
@property (retain, nonatomic) AWEDemaciaChapterProgressSlider *chapterProgressBar;
@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) id<ACCChapterVideoToolBarDelegate> videoToolBarDelegate;
@property (nonatomic) BOOL progressBarButtonIsSelected;

- (id)defaultThumbImage;
- (void)addChapterPointTimestamp:(long long)a0;
- (void)removeAllChapters;
- (id)initWithShowChapterProgressBar:(BOOL)a0 showChapterProgressBarButton:(BOOL)a1 viewController:(id)a2;
- (void)updateChapterDetails:(id)a0 chapterBarColors:(id)a1;
- (void)refreshContext:(id)a0;
- (void)shouldShowChapterProgressBar:(BOOL)a0;
- (void)removeChapterPointAtIndex:(long long)a0;
- (void)updateChapterPointTimestamp:(long long)a0 atIndex:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)updateProgress:(double)a0;

@end
