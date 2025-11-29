@class NSString, IESMMAudioEffectConfig;

@interface IESMMAudioFilter : IESMMObject <NSCopying, KeyFrameOperationDelegate> {
    char *preProcessChunk;
    int chunkMemLength;
    int chunkSize;
}

@property (nonatomic) unsigned long long startPTS;
@property (nonatomic) unsigned long long endPTS;
@property (readonly, nonatomic) NSString *filterId;
@property (nonatomic) int type;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } attachTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) IESMMAudioEffectConfig *config;
@property (retain, nonatomic) NSString *audioPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoAudioFilterWithDic:(id)a0;

- (void)setPreProcessFromChunk:(const void *)a0 length:(int)a1;
- (id)toDicInfo;
- (void)setkeyFrameInfo:(id)a0 withPts:(unsigned long long)a1;
- (void)removekeyFrameInfo:(unsigned long long)a0;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (id)toDicInfo:(BOOL)a0;
- (double)startTimeI;
- (double)endTimeI;
- (BOOL)isRangeFilter;
- (char *)getPreProcessFromChunk:(int *)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
