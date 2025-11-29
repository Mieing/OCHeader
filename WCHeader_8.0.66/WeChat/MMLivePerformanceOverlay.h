@class UITextView, MMTimer, NSDateFormatter, MMLivePerformanceViewModel, UILabel, NSString;

@interface MMLivePerformanceOverlay : UIView <MMLivePerformanceViewModelDelegate>

@property (retain, nonatomic) MMLivePerformanceViewModel *viewModel;
@property (retain, nonatomic) UILabel *timerTextView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)loadTextView;
- (void)layoutSubviews;
- (void)updatePerformanceContent;
- (void)livePerformanceViewModelDidUpdate:(id)a0;
- (void)timerTick;
- (void).cxx_destruct;

@end
