@class NSString, IESECPDPVideoPlayStateManager, IESECPDPVideoFloatManager, NSHashTable, IESECPDPVideoAudioStateManager;

@interface IESECPDPVideoPlayerInitializer : NSObject <IESECPDPVideoPlayerInitializerProtocol>

@property (retain, nonatomic) IESECPDPVideoAudioStateManager *audioManager;
@property (retain, nonatomic) IESECPDPVideoPlayStateManager *stateManager;
@property (retain, nonatomic) IESECPDPVideoFloatManager *floatManager;
@property (retain, nonatomic) NSHashTable *playersTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
