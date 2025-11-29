@class TPLock, NSString, NSArray, NSMutableDictionary, NSMutableArray;
@protocol ITPReportWrapper;

@interface TPRichMediaSynchronizerReportPlugin : NSObject <ITPPluginBase>

@property (retain, nonatomic) id<ITPReportWrapper> beaconReporter;
@property (retain, nonatomic) TPLock *lock;
@property (copy, nonatomic) NSString *flowId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *features;
@property (nonatomic) long long selectSeq;
@property (nonatomic) long long callbackDataSeq;
@property (nonatomic) long long currentPositionMs;
@property (nonatomic) long long prepareStartTimeMs;
@property (retain, nonatomic) NSMutableArray *selectFeatureParams;
@property (retain, nonatomic) NSMutableDictionary *callbackDataParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onAttatch;
- (void)onDetach;
- (void)onEvent:(unsigned long long)a0 withUserInfo:(id)a1;
- (void)onSetUrl:(id)a0;
- (void)onStartPrepare;
- (void)onPrepared:(id)a0;
- (void)onStartSelect:(id)a0;
- (void)onSelectDone:(id)a0;
- (void)onStartDeselect:(id)a0;
- (void)onDeselectDone:(id)a0;
- (void)onReset;
- (void)onRelease;
- (void)onError:(id)a0;
- (void)onFeatureFailure:(id)a0;
- (void)onUpdatePosition:(id)a0;
- (void)finishReportAndClearResourceWithCode:(int)a0;
- (void)finishReportWithCode:(int)a0;
- (void)clearResource;
- (void)allFeatureSelectDoneWithCode:(int)a0;
- (void)allFeatureDataCallbackDoneWithCode:(int)a0;
- (void)featureSelectDoneWithFeatureIndex:(int)a0 code:(int)a1;
- (void)featureDataCallbackDone:(int)a0 code:(int)a1;
- (id)featureTypeWithFeatureIndex:(int)a0;
- (void)reportRichMediaPreparedWithCode:(int)a0;
- (void)reportFeatureSelect:(id)a0 featureType:(id)a1 code:(int)a2;
- (void)reportFeatureDataCallback:(id)a0 featureType:(id)a1 code:(int)a2;
- (id)commonReportParams;
- (void)reportEvent:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
