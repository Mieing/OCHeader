@class HTSEventContext, NSMutableDictionary;

@interface IESLiveNewAudienceRelaxPerformanceLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *hasSendLog;
@property (nonatomic) double startTimeStamp;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)radicalCardRender;
- (void)recommendRender;
- (void)selfDefineComponentRender;
- (void)topViewRender;
- (void)requestReceiveRelax;
- (void)renderNoRequest;
- (id)initWithTranceContext:(id)a0;
- (void)commonSendLog:(id)a0;
- (void).cxx_destruct;
- (void)requestStart;
- (void)requestEnd;

@end
