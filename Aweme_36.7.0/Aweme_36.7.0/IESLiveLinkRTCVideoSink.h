@class NSString;

@interface IESLiveLinkRTCVideoSink : NSObject <ILCRTCVideoSinkProtocol>

@property (copy, nonatomic) id /* block */ videoBufferCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushVideoBuffer:(struct __CVBuffer { } *)a0 timeInfo:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 extraData:(id)a2;
- (void).cxx_destruct;

@end
