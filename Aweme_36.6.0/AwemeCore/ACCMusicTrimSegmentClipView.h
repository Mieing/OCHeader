@class ACCMusicTrimExpandClickView, ACCMusicUIThemeModel, NSString, UIView, DVESegmentClipBorderView;
@protocol ACCMusicTrimSegmentClipViewAccessibilityDelegate, ACCMusicSegmentClipViewDelegate;

@interface ACCMusicTrimSegmentClipView : UIView <ACCMusicTrimExpandClickViewDelegate>

@property (class, readonly, nonatomic) double arrowWidth;

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) ACCMusicTrimExpandClickView *leftArrowView;
@property (retain, nonatomic) ACCMusicTrimExpandClickView *rightArrowView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (readonly, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (weak, nonatomic) id<ACCMusicSegmentClipViewDelegate> delegate;
@property (weak, nonatomic) id<ACCMusicTrimSegmentClipViewAccessibilityDelegate> accessibilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEditClipViewHidden:(BOOL)a0;
- (void)setBorderClipViewHidden:(BOOL)a0;
- (id)initWithMode:(unsigned long long)a0 themeModel:(id)a1;
- (void)accessibilityIncrementWith:(id)a0;
- (void)accessibilityDecrementWith:(id)a0;
- (id)configAccessibilityValueWith:(id)a0;
- (id)configAccessibilityLabelWith:(id)a0;
- (id)initWithMode:(unsigned long long)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)space;
- (double)lineHeight;
- (void)setupUI;
- (void)setupGestures;

@end
