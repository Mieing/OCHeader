@class HTSEventContext, NSMutableArray, NSMutableSet;

@interface IESLiveDanmakuMonitor : NSObject

@property (retain, nonatomic) NSMutableArray *receivedImportantDanmaku;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableSet *danmakuDisableReasons;
@property (retain, nonatomic) NSMutableSet *danmakuLandscapeDisableReasons;
@property (nonatomic) long long discardCount;
@property (nonatomic) long long createFailedCount;
@property (nonatomic) long long filterCount;
@property (nonatomic) long long danmakuEngineLoadType;

- (void)reportOnDanmakuUnmount;
- (void)monitorAddDanmakuMessageIfNeeded:(id)a0;
- (void)reportDanmakuContainerPositionErrorWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)importantDanmakuMessageClass;
- (void)reportErrorStateImportantDanmakuMessages;
- (void)reportDanmakuErrorDataStatistic;
- (void)trackDanmakuEngineInit;
- (void).cxx_destruct;
- (id)init;

@end
