@class TPPlayerLogContext, NSString, TPPluginManager;
@protocol ITPRichMediaSynchronizerDelegate, ITPInnerRichMediaSynchronizerDelegate, ITPPlayerRichMediaProcessorWrapper;

@interface TPRichMediaSynchronizer : NSObject <ITPPlayerRichMediaProcessorWrapperCallback, ITPInnerRichMediaProcessWrapperCallback, ITPInnerRichMediaSynchronizer>

@property (retain, nonatomic) id<ITPPlayerRichMediaProcessorWrapper> processor;
@property (retain, nonatomic) TPPlayerLogContext *log;
@property (retain, nonatomic) TPPluginManager *pluginManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ITPInnerRichMediaSynchronizerDelegate> innerDelegate;
@property (weak, nonatomic) id<ITPRichMediaSynchronizerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (long long)setRichMediaSource:(id)a0;
- (long long)prepareAsync;
- (id)features;
- (long long)selectFeatureAsync:(int)a0 extraRequestInfo:(id)a1;
- (long long)deselectFeatureAsync:(int)a0;
- (long long)reset;
- (void)releaseRichMedia;
- (long long)seekTo:(long long)a0;
- (id)getFeatureDataWithCurrentPositionMs:(long long)a0 richMediaIndexes:(id)a1;
- (long long)setPlaybackRate:(float)a0;
- (void)onRichMediaProcessorPrepared:(id)a0;
- (void)onRichMediaProcessor:(id)a0 errorCode:(int)a1;
- (void)onRichMediaProcessor:(id)a0 richMediaIndex:(int)a1 featureData:(const void *)a2;
- (void)onDeselectFeatureSuccess:(id)a0 richMediaIndex:(int)a1;
- (void)onSelectFeatureSuccess:(id)a0 richMediaIndex:(int)a1;
- (void)onRichMediaFeatureFailure:(id)a0 richMediaIndex:(int)a1 errorCode:(int)a2;
- (void)onRichMediaProcessor:(id)a0 infoType:(int)a1 param1:(long long)a2 param2:(long long)a3 param3:(long long)a4 object:(void *)a5;
- (long long)OnGetCurrentPositionMs:(id)a0;
- (void)pushEventToPluginWithEvent:(unsigned long long)a0 withUserInfo:(id)a1;
- (void).cxx_destruct;

@end
