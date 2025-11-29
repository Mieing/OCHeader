@class UIImageView, UILabel, NSString;

@interface IESLiveKTVMidiLevelComboView : UIView <IESLiveKTVDecorateMidiProtocol>

@property (retain, nonatomic) UIImageView *goodFeedBackView;
@property (retain, nonatomic) UIImageView *niceFeedBackView;
@property (retain, nonatomic) UIImageView *perfectFeedBackView;
@property (retain, nonatomic) UIImageView *hitComboPerfectFeedbackView;
@property (retain, nonatomic) UIImageView *hitComboPerfectBGView;
@property (retain, nonatomic) UILabel *comboTimesLabel;
@property (retain, nonatomic) UILabel *hitComboTimesLabel;
@property (nonatomic) long long hitComboTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDecorate:(id)a0;
- (id)createZoomAnimeWithDuration:(double)a0 fromValue:(id)a1 toValue:(id)a2 beginTime:(double)a3;
- (id)createOpacityAnimeWithDuration:(double)a0 fromValue:(id)a1 toValue:(id)a2 beginTime:(double)a3;
- (void)showFeedbackWithLevel:(long long)a0 comboTimes:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
