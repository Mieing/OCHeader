@class NSData, ProtobufCGIProfile;

@interface WCFinderMoreLiveFluencyInfo : NSObject

@property (nonatomic) long long startScene;
@property (nonatomic) unsigned long long finishScene;
@property (nonatomic) unsigned long long enterTimestamp;
@property (nonatomic) unsigned long long pullStreamCGITimestamp;
@property (nonatomic) unsigned long long getLiveTabsFinishTimestamp;
@property (nonatomic) unsigned long long pullCGIFinishTimestamp;
@property (nonatomic) unsigned long long uiStartLoadingTimestamp;
@property (nonatomic) unsigned long long uiFinishLoadingTimestamp;
@property (copy, nonatomic) NSData *debugMessage;
@property (nonatomic) unsigned long long localOperationFinishTimestamp;
@property (nonatomic) unsigned long long showUIFinishTimestamp;
@property (retain, nonatomic) ProtobufCGIProfile *cgiProfile;

- (id)genFluencyInfo;
- (BOOL)isReadyForReporting;
- (void)clear;
- (unsigned long long)globalInitTime;
- (unsigned long long)pullCGITime;
- (BOOL)setDebugMessageIfCan:(id)a0;
- (unsigned long long)localOperationTime;
- (unsigned long long)showUITime;
- (BOOL)setUIStartLoadingTimeIfCan:(unsigned long long)a0;
- (BOOL)setUIFinishLoadingTimeIfCan:(unsigned long long)a0;
- (unsigned long long)totalTime;
- (unsigned long long)loadingTime;
- (BOOL)setStartSceneIfCan:(long long)a0;
- (BOOL)setFinishSceneIfCan:(unsigned long long)a0;
- (BOOL)setEnterTimestampIfCan:(unsigned long long)a0;
- (BOOL)setPullStreamCGITimeIfCan:(unsigned long long)a0;
- (BOOL)setPullCGIFinishTimeIfCan:(unsigned long long)a0;
- (BOOL)setPullCGIFinishProfileIfCan:(id)a0;
- (BOOL)setLocalOperationFinishTimeIfCan:(unsigned long long)a0;
- (BOOL)setShowUIFinishTimeIfCan:(unsigned long long)a0;
- (BOOL)setGetLiveTabCGIFinishTimeIfCan:(unsigned long long)a0;
- (void).cxx_destruct;

@end
