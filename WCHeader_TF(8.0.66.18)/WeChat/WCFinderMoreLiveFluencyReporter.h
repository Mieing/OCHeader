@class NSMutableArray, NSMutableDictionary;

@interface WCFinderMoreLiveFluencyReporter : NSObject

@property (retain, nonatomic) NSMutableArray *infoBuffer;
@property (retain, nonatomic) NSMutableDictionary *infoDict;
@property (retain, nonatomic) NSMutableArray *skipReportScenes;

+ (id)sharedReporter;

- (void)setStartSceneIfCan:(long long)a0 reportScene:(int)a1;
- (void)setFinishSceneIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (void)setEnterTimestampIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (void)setGetLiveTabsCGIFinishTimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (void)setPullLbsStreamCGITimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (void)setPullLbsCGIFinishTimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (void)setPullCGIFinishProfileIfCan:(id)a0 reportScene:(int)a1;
- (void)setLocalOperationFinishTimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (void)setDebugMessageIfCan:(id)a0 reportScene:(int)a1;
- (void)setShowUIFinishTimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (BOOL)setUIStartLoadingTimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (BOOL)setUIFinishLoadingTimeIfCan:(unsigned long long)a0 reportScene:(int)a1;
- (id)getFluencyReportInfoWithReportScene:(int)a0;
- (void)reportIfOkWithReportScene:(int)a0;
- (void)clearFluencyReportData;
- (void)skipSpecificReport:(int)a0;
- (void).cxx_destruct;

@end
