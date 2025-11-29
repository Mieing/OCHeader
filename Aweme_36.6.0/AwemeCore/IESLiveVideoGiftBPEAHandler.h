@class NSString;

@interface IESLiveVideoGiftBPEAHandler : NSObject <IESLiveVideoGiftBPEAProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)AUGraphStart:(struct OpaqueAUGraph { } *)a0 privacyCertToken:(id)a1 error:(id *)a2;

@end
