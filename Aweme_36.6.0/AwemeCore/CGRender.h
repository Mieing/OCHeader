@class NSString, UIView;
@protocol ByteRTCStream, XPlaySink;

@interface CGRender : CGObject <XPlayRenderFrameDelegate, CGCloudPlayerMessage, XPlayExternalRenderResultDelegate, XPlayRenderProtocol>

@property (retain, nonatomic) UIView *renderView;
@property (nonatomic) unsigned long long renderType;
@property (retain, nonatomic) id<ByteRTCStream> stream;
@property (retain, nonatomic) id<XPlaySink> xplaySink;
@property (nonatomic) BOOL hasPublishVideoStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long renderMode;
@property (readonly, nonatomic) long long frameContentType;
@property (readonly, nonatomic) long long pureColor;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)setProcessorType:(id)a0;
- (void)updateView:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)setupRenderView:(id)a0;
- (void)setupLibraRenderConfigWithView:(id)a0;
- (void)setupRTCInternalRenderView:(id)a0;
- (void)setupRTCExternalRenderView:(id)a0 renderType:(long long)a1 processorType:(id)a2;
- (id)setupRenderConfig;
- (void)setPureDetectCallback:(id /* block */)a0;
- (void)onRenderFrame:(id)a0;
- (void)onExternalRenderResultWithRendered:(BOOL)a0 stats:(id)a1 code:(long long)a2;
- (void)enableVideoCanvasRender:(BOOL)a0;
- (void)enableVideoFrame:(BOOL)a0;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserPublishStreamVideo:(BOOL)a2 uid:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
