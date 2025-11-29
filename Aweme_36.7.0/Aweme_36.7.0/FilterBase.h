@class NSString, NSMutableArray;

@interface FilterBase : NSObject {
    struct VideoProcessorInterface { void /* function */ **x0; } *_videoProcessorInterface;
}

@property int filterType;
@property int order;
@property int logFlag;
@property (retain) FilterBase *next;
@property (retain) FilterBase *previous;
@property BOOL isUsing;
@property int initError;
@property int filterIndex;
@property float filterVideoFps;
@property float filterLimitUpperFps;
@property float filterLimitLowerFps;
@property int inputFmt;
@property BOOL isFilterEffective;
@property (readonly, nonatomic) int perEffectFrameCount;
@property (readonly, nonatomic) double perEffectAccumulatedTime;
@property (readonly, nonatomic) double perEffectAveragedTime;
@property (readonly, nonatomic) double perEffectStartTime;
@property (readonly, nonatomic) int perEffectProcessDepth;
@property (readonly, nonatomic) int perEffectErrorCode;
@property (readonly, copy) NSString *perEffectErrorMsg;
@property (weak, nonatomic) FilterBase *holder;
@property (retain, nonatomic) NSMutableArray *processorErrorCodes;
@property (retain, nonatomic) NSMutableArray *errorCodesInit;

- (id)dictionaryToJson:(id)a0;
- (float)getFloatValueForKey:(int)a0;
- (id)getStringValueForKey:(int)a0;
- (void)setIntValue:(int)a0 forKey:(int)a1;
- (void)reportFilterError:(int)a0 errorMsg:(id)a1 nsError:(id)a2;
- (void)effectProcessBegin;
- (void)effectProcessEnd;
- (void)reportFilterError:(int)a0 errorMsg:(id)a1 nsError:(id)a2 subErrorcode:(int)a3 stage:(int)a4;
- (void)reportFilterError:(int)a0 subErrorcode:(int)a1 stage:(int)a2;
- (id)getViewInterface;
- (BOOL)checkIsRenderToMetalView;
- (id)getBaseEffectPatameter;
- (BOOL)enableVPDirctScreen;
- (BOOL)supportRenderToMetalView;
- (id)getEffectPatameterStr;
- (void)insertFilter:(id)a0;
- (void)removeEffect;
- (void)setPerEffectError:(int)a0 errorMsg:(id)a1;
- (void)cleanEffectProcessTrackingInfo;
- (void)setVideoProcessorInterface:(void *)a0;
- (void)onFirstFrameRenderStart;
- (id)releaseFilter;
- (void)setInt64Value:(long long)a0 forKey:(int)a1;
- (BOOL)isPixFmtEqual:(int)a0 compareTo:(int)a1;
- (int)getValueForKey:(int)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setEffect:(id)a0;
- (void)setValue:(float)a0 forKey:(int)a1;
- (void)dealloc;
- (id)initWithFilterType:(int)a0;

@end
