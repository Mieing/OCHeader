@class UIImageView, IESLiveWidgetGuideEntryViewModel, UILabel, IESLiveGCDTimer, UIButton;
@protocol IESLiveWidgetGuideEntryViewDelegate;

@interface IESLiveWidgetGuideEntryView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *bottomButton;
@property (retain, nonatomic) IESLiveWidgetGuideEntryViewModel *model;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) long long seconds;
@property (weak, nonatomic) id<IESLiveWidgetGuideEntryViewDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void)clickToClose:(id)a0;
- (void)hideWithAutoClose:(BOOL)a0;
- (void)clickToAdd:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (void)invalidateTimer;
- (void)hide;
- (void)setupSubviews;

@end
