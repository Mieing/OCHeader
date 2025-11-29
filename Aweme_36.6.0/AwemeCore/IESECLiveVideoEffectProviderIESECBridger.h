@class NSString;
@protocol IESLiveVideoEffectProcessing;

@interface IESECLiveVideoEffectProviderIESECBridger : NSObject <IESECLiveVideoEffectProvider>

@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (struct __CVBuffer { } *)getPixelBufferWithIsEffected:(BOOL)a0;
- (void).cxx_destruct;

@end
