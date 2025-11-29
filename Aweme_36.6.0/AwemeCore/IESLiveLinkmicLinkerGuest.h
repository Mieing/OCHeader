@class NSNumber, IESLiveLinkmicLinkerConfig, NSString;
@protocol IESLiveLinkmicLinkerDataSource, IESLiveLinkmicLinkServiceInterface, IESLiveLinkmicMediaServiceInterface, IESLiveLinkmicUserServiceInterface;

@interface IESLiveLinkmicLinkerGuest : IESLiveLinkmicLinker <IESLiveLinkmicLinkerDelegate, IESLiveLinkmicLinkServiceDelegate, IESLiveLinkmicUserServiceDelegate, IESLiveLinkmicMediaServiceDelegate>

@property (nonatomic) BOOL isEndingLinkChannel;
@property (copy, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) IESLiveLinkmicLinkerConfig *config;
@property (weak, nonatomic) id<IESLiveLinkmicLinkerDataSource> dataSource;
@property (readonly, nonatomic) id<IESLiveLinkmicLinkServiceInterface> linkI;
@property (readonly, nonatomic) id<IESLiveLinkmicUserServiceInterface> userI;
@property (readonly, nonatomic) id<IESLiveLinkmicMediaServiceInterface> mediaI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onReceivedCreateMessage:(id)a0;
- (void)onReceivedCloseMessage:(id)a0;
- (void)onReceivedLinkedListChangeMessage:(id)a0;
- (id)currentLinkmicID;
- (void)linkmicMediaService:(id)a0 receivesError:(id)a1;
- (void)linkmicMediaServiceDidStart:(id)a0;
- (void)linkmicMediaServiceDidEnd:(id)a0;
- (void)linkmicMediaService:(id)a0 onUserJoined:(id)a1;
- (void)linkmicMediaService:(id)a0 onUserLeaved:(id)a1 reason:(unsigned long long)a2;
- (void)linkmicMediaService:(id)a0 onUserAudioMute:(id)a1 mute:(BOOL)a2;
- (void)linkmicMediaService:(id)a0 firstRemoteAudioWithLinkmicUid:(id)a1;
- (void)linkmicMediaServiceFirstLocalAudio:(id)a0;
- (void)linkmicMediaServiceDidStartPushStream:(id)a0;
- (void)linkmicUserService:(id)a0 onActiveListDidChangeFrom:(id)a1 to:(id)a2;
- (void)linkmicMediaServiceWillEnd:(id)a0;
- (void)linkmicMediaService:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2;
- (void)linkmicMediaServiceSomeoneTalkingStateDidChanged:(id)a0;
- (void)linkmicMediaService:(id)a0 audioSessionInterrupt:(unsigned long long)a1;
- (void)linkmicMediaService:(id)a0 onActiveChanged:(BOOL)a1 linkmicID:(id)a2;
- (void)stopLinkChannelInteracting;
- (void)joinLinkChannel:(id)a0 completion:(id /* block */)a1;
- (void)stopLinkChannel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
