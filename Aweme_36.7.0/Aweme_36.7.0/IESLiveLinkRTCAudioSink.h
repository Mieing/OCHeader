@class NSString;

@interface IESLiveLinkRTCAudioSink : NSObject <ILCRTCAudioSinkProtocol>

@property (copy, nonatomic) id /* block */ audioDataCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushAudioData:(void *)a0 size:(unsigned int)a1 timeStamp:(long long)a2;
- (void).cxx_destruct;

@end
