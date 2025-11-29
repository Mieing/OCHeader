@class NSString, NSMutableDictionary;
@protocol IESECPDPVideoPlayerInitializerProtocol;

@interface IESECPDPVideoFloatManager : NSObject <IESECPDPVideoOnFloatManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *displayingPlayersMap;
@property (weak, nonatomic) id<IESECPDPVideoPlayerInitializerProtocol> initializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryShowPlayerOnFloat:(id)a0;
- (void)hidePlayerOnFloat:(id)a0;
- (BOOL)isPlayerShowingOnFloat:(id)a0;
- (void)doShowPlayerOnFloat:(id)a0;
- (void)doHidePlayerOnFloat:(id)a0;
- (BOOL)canPlayerShowOnTop:(id)a0;
- (id)getDenySyncDisplayListWithPlayer:(id)a0;
- (void)forceShowPlayerOnFloat:(id)a0;
- (void)hideAllPlayerOnFloat;
- (void).cxx_destruct;
- (id)init;

@end
