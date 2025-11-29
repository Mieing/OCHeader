@class NSString;
@protocol RTVUserProfileManagerInterface;

@interface RTVVoipRingtoneWebService : NSObject <RTVVoipRingtoneWebService>

@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentUserRingtoneWithMusicId:(id)a0 completion:(id /* block */)a1;
- (void)collectRingtoneMusicWithMusicId:(id)a0 collect:(BOOL)a1 completion:(id /* block */)a2;
- (void)diggRingtoneWithMusicId:(id)a0 peerUserId:(id)a1 isDigg:(BOOL)a2 mediaType:(id)a3 completion:(id /* block */)a4;
- (void)requestRingtoneModelWith:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
