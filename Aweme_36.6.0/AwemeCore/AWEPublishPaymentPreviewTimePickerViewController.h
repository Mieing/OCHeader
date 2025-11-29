@class DUXPicker, NSString, NSMutableArray;

@interface AWEPublishPaymentPreviewTimePickerViewController : UIViewController <DUXPickerDelegate>

@property (weak, nonatomic) DUXPicker *picker;
@property (copy, nonatomic) NSString *barTitle;
@property (nonatomic) double maxDuration;
@property (nonatomic) double minDuration;
@property (nonatomic) double initialTime;
@property (retain, nonatomic) NSMutableArray *timeData;
@property (copy, nonatomic) id /* block */ didClickConfirmAction;
@property (copy, nonatomic) id /* block */ didClickCancelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentCountInDUXPicker:(id)a0;
- (long long)duxPicker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)duxPicker:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)initWithBarTitle:(id)a0 maxDuration:(double)a1 minDuration:(double)a2 initialTime:(double)a3;
- (void)configInitialTimeData;
- (void)updatePickerIfNeededWhenChangedForComponent:(long long)a0 row:(long long)a1;
- (void)configTimeDataWithTime:(double)a0;
- (id)configHours;
- (id)configMinutesWithHour:(long long)a0;
- (id)configSecondsWithHour:(long long)a0 minute:(long long)a1;
- (void)selectRowWithTime:(double)a0;
- (id)updateMinuteWhenChangeToHour:(long long)a0 component:(long long)a1;
- (id)updateSecondWhenChangeToHour:(long long)a0 minute:(long long)a1 component:(long long)a2;
- (void)selectRowForIndexPath:(id)a0;
- (long long)minMinuteWithHour:(long long)a0;
- (long long)maxMinuteWithHour:(long long)a0;
- (id)updateTimeWithComponent:(long long)a0 shouldUpdateHandler:(id /* block */)a1 updateDataHandler:(id /* block */)a2;
- (long long)minSecondWithHour:(long long)a0 minute:(long long)a1;
- (long long)maxSecondWithHour:(long long)a0 minute:(long long)a1;
- (long long)maxHour;
- (long long)minHour;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)getCurrentTime;
- (void)setupUI;

@end
