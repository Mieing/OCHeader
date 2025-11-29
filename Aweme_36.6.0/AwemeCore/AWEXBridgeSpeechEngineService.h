@class NSString;

@interface AWEXBridgeSpeechEngineService : NSObject <BDXSpeechEngineFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createEngineWithDelegate:(id)a0;

@end
