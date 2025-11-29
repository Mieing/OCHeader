@class NSString, _TtC8TempoiOS11TempoOCView;
@protocol DitoTempoViewProxyProtocol;

@interface DitoTempoViewImpl : NSObject <TempoiOS.TempoOCViewProxy>

@property (retain, nonatomic) id<DitoTempoViewProxyProtocol> proxy;
@property (weak, nonatomic) _TtC8TempoiOS11TempoOCView *tempoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBuildView;
- (void)completeShow;
- (void)endShow;
- (void)buildContentWithSuperView:(id)a0;
- (void).cxx_destruct;
- (id)initWithProxy:(id)a0;
- (void)willShow;

@end
