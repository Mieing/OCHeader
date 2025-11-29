@class TPPlayerStateWrapper;

@interface TPPlayerStateStrategy : NSObject

@property (retain, nonatomic) TPPlayerStateWrapper *stateWrapper;

- (id)initWithStateWrapper:(id)a0;
- (BOOL)isValidStateToCall:(unsigned long long)a0;
- (BOOL)isValidStateToCallBack:(unsigned long long)a0;
- (BOOL)isValidStateToCallPrepare;
- (BOOL)isValidStateToCallSetDataSource;
- (BOOL)isValidStateToCallSetParams;
- (BOOL)isValidStateToCallSetView;
- (BOOL)isValidStateToCallStart;
- (BOOL)isValidStateToCallPause;
- (BOOL)isValidStateToCallStop;
- (BOOL)isValidStateToCallReset;
- (BOOL)isValidStateToCallSeek;
- (BOOL)isValidStateToCallSwitchDefinition;
- (BOOL)isValidStateToCallSelectTrack;
- (BOOL)isValidStateToCallDeselectTrack;
- (BOOL)isValidStateToCallSelectProgram;
- (BOOL)isValidStateToCallGetDuration;
- (BOOL)isValidStateToCallGetPosition;
- (BOOL)isValidStateToCallGetVideoSize;
- (BOOL)isValidStateToCallGetState;
- (BOOL)isValidStateToCallGetBufferPercent;
- (BOOL)isValidStateToCallRelease;
- (BOOL)isValidStateToCallGetDemuxerOffsetInFile;
- (BOOL)isValidStateToCallGetDynamicStatisticParams;
- (BOOL)isValidStateToCallGetGeneralPlayFlowParams;
- (BOOL)isValidStateToCallGetDynamicStatisticParamsAndReset;
- (BOOL)isValidStateToCallbackOnPreared;
- (BOOL)isValidStateToCallbackOnComplete;
- (BOOL)isValidStateToCallbackOnInfo;
- (BOOL)isValidStateToCallbackOnError;
- (BOOL)isValidStateToCallbackOnVideoSizeChanged;
- (BOOL)isValidStateToCallbackOnDataOutput;
- (BOOL)isValidStateToCallbackOnSeekComplete;
- (void).cxx_destruct;

@end
