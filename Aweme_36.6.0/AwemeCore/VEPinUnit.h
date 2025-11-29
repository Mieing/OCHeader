@class AVPlayerItem, HTSVideoData, NSMutableDictionary, HTSGLContext, NSString;
@protocol IVEPlayerUnitProtocol;

@interface VEPinUnit : NSObject <VEAppStatusProtocol>

@property (nonatomic) float pinDuration;
@property (nonatomic) float pinTime;
@property (nonatomic) double forwardTime;
@property (nonatomic) double backwardTime;
@property (nonatomic) BOOL cancled;
@property (retain, nonatomic) AVPlayerItem *item;
@property (nonatomic) float targetFps;
@property (nonatomic) float currentFps;
@property (nonatomic) float deltaFps;
@property (nonatomic) float count;
@property (nonatomic) BOOL crossplatInput;
@property (retain, nonatomic) NSMutableDictionary *pinTimeMappingDicArray;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) HTSGLContext *htsGLContext;
@property (nonatomic) float stickerStartTime;
@property (nonatomic) float stickerDuration;
@property (retain, nonatomic) id<IVEPlayerUnitProtocol> playerUnit;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL isNeedTimeMapping;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)readerSetting;
- (void)lvProcessData:(id)a0;
- (void)buildPinTimeMappingDic:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)p_lvStartPinProcess:(id /* block */)a0;
- (id)mergeVideodataItem:(id)a0;
- (void)read:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completionHandler:(id /* block */)a2 bufferBlock:(id /* block */)a3;
- (void)reverseRead:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completionHandler:(id /* block */)a2 bufferBlock:(id /* block */)a3;
- (void)canclePin;
- (BOOL)buildPinWithVideodata:(id)a0 pinStartTime:(float)a1 pinDuration:(float)a2 pinTime:(float)a3;
- (void)startPinProcesser:(id /* block */)a0;
- (id)getPinTimeDic;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)enterBackground;
- (id)initWithContext:(id)a0;
- (void)resignActive;
- (id)init;
- (void)processData:(struct opaqueCMSampleBuffer { } *)a0;
- (void)enterForeground;
- (void)dealloc;
- (void)memoryWarning;

@end
