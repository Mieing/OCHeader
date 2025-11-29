@class NSString, UIViewController, UIView;
@protocol XPlayCloudPlayerProtocol;

@interface AWELiveXPlayCloudPlayerWrapper : NSObject <IESLiveXPlayCloudPlayerProtocol>

@property (retain, nonatomic) id<XPlayCloudPlayerProtocol> cloudPlayer;
@property (readonly, copy, nonatomic) NSString *roomId;
@property (readonly, copy, nonatomic) NSString *clientUserId;
@property (readonly, copy, nonatomic) NSString *remoteUserId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL didPlay;
@property (readonly, nonatomic) BOOL didLoadSuccess;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) UIViewController *controller;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) unsigned long long renderMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0;
- (long long)pureColor;
- (long long)frameContentType;
- (void)setPureDetectCallback:(id /* block */)a0;
- (void)interenalVideoCanvasRender:(BOOL)a0;
- (BOOL)isMainCloudPlayer;
- (void)setRenderProcessorTypeNone;
- (void)setRenderProcessorTypeSharpenWithSharpness:(double)a0 brightness:(double)a1 contrast:(double)a2;
- (void)setRenderProcessorTypeEnhanceWithBrightness:(double)a0 contrast:(double)a1;
- (id)initWithCloudPlayer:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)dealloc;
- (void)focus;
- (void)setMute:(BOOL)a0;

@end
