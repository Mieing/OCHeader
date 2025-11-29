@class UILabel, NSMutableArray;

@interface AWEECOMIMInputSpeechAnimationView : UIView

@property (retain, nonatomic) NSMutableArray *speechItemViews;
@property (retain, nonatomic) UILabel *timeCountLabel;

- (id)vLineWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)volumeItemsBkgAlpha;
- (id)volumeItemsHeightArrWithType:(long long)a0;
- (void)updateAnimationViewWithCurrentVolume:(double)a0 startTime:(double)a1;
- (void)updateAnimationVieWithIsWarning:(BOOL)a0;
- (void)updateLabelTextWithStartTime:(double)a0;
- (void)resetSpeechAnimationView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
