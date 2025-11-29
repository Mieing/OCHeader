@class AWEPOICardPerfReportConfig, NSMutableDictionary, DitoPageContext;

@interface AWEPOIDetailCardPerfTrackUtil : NSObject

@property (retain, nonatomic) AWEPOICardPerfReportConfig *cardPerfReportConfig;
@property (retain, nonatomic) NSMutableDictionary *trackedCardList;
@property (weak, nonatomic) DitoPageContext *context;
@property (nonatomic) double pageStartTime;

- (id)buildLynxEvent:(id)a0;
- (id)buildTempoEvent:(id)a0;
- (void)extraPropsWithKey:(id)a0 perfInfo:(id)a1 builder:(id)a2;
- (double)convertMediaTimeToUnixTimestamp:(double)a0;
- (id)getTimingInPerfInfo:(id)a0 key:(id)a1;
- (id)subWithNumberA:(id)a0 numberB:(id)a1;
- (id)getLynxSetupTiming:(id)a0 key:(id)a1;
- (void)trackCardPerfEventWithPerfInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
