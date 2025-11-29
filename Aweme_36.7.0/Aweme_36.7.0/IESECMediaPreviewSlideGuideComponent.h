@class NSMutableDictionary, NSTimer, UILabel, UIView, IESECUIImageView;

@interface IESECMediaPreviewSlideGuideComponent : IESECMediaPreviewBaseComponent

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESECUIImageView *arrow;
@property (retain, nonatomic) NSMutableDictionary *showOnceMap;
@property (retain, nonatomic) NSTimer *timer;

- (void)previewViewDidLoad;
- (void)previewScrollViewIsScrollingWithCurIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void)updateRequest:(id)a0;
- (void)setupGuideTextWithIndex:(unsigned long long)a0;
- (long long)coverPreviewIndexToTabIndex:(long long)a0;
- (void)startAnimateWithText:(id)a0;
- (void)showSlideGuide:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)setupTimer;
- (void)setupUI;

@end
