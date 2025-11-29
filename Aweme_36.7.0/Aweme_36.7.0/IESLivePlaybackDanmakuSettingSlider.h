@class UIPanGestureRecognizer, NSMutableArray, UIView;

@interface IESLivePlaybackDanmakuSettingSlider : UIView

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *defaultPoint;
@property (retain, nonatomic) UIView *backSlider;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIView *trackView;
@property (retain, nonatomic) NSMutableArray *stepPoint;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long maxValue;
@property (nonatomic) unsigned long long minValue;
@property (copy, nonatomic) id /* block */ valueChangedBlock;

- (void)buildGesture;
- (double)stepPosition:(unsigned long long)a0;
- (void)updateSubviewPosition;
- (void)updateDisplayNumber:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 count:(unsigned long long)a1 index:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(unsigned long long)a1 maxValue:(unsigned long long)a2 minValue:(unsigned long long)a3;
- (void).cxx_destruct;
- (unsigned long long)getValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildView;
- (void)didPan:(id)a0;

@end
