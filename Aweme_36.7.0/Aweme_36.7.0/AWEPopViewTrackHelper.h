@class AWEAlertManager, AWEPopViewShowInfo;

@interface AWEPopViewTrackHelper : NSObject

@property (weak, nonatomic) AWEAlertManager *alertDelegate;
@property (retain, nonatomic) AWEPopViewShowInfo *showInfo;

+ (void)trackAlertForEvent:(id)a0 extraParams:(id)a1;

- (id)initWithAlertDelegate:(id)a0;
- (void)recordTimeWithEvent:(id)a0;
- (void)recordWillShowTimeWithAlert:(id)a0;
- (void)recordShowingTimeWithAlert:(id)a0;
- (void)popViewEventExecuteEnd;
- (void)recordShowCompleteInfoWithAlert:(id)a0;
- (void)trackEventEnded:(id)a0 endReason:(unsigned long long)a1 trackExtra:(id)a2;
- (void)collectTrackParamsWithAlert:(id)a0;
- (id)getOtherShowingPops:(id)a0 currentShowingAlertIDs:(id)a1;
- (id)getPopViewDurationTrackInfo;
- (void).cxx_destruct;

@end
