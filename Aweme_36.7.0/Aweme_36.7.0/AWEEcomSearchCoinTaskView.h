@class AWEEcomSearchResultPageCoinTaskResponse, NSTimer, NSDictionary, UILabel, UIView;

@interface AWEEcomSearchCoinTaskView : UIView

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double pastTimeinterval;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) AWEEcomSearchResultPageCoinTaskResponse *taskResponse;
@property (copy, nonatomic) NSDictionary *taskQueryParams;
@property (nonatomic) BOOL disableTask;

- (void)updateTheme:(id)a0;
- (void)timerTicker;
- (void)freshUI;
- (void)finishTask:(BOOL)a0;
- (BOOL)hasCoinTask;
- (void)updateTask:(id)a0;
- (void).cxx_destruct;
- (void)runTask:(id)a0;

@end
