@class NSDictionary, TRTCCloud, NSMutableDictionary;
@protocol TRTCRemoteUserManagerDelegate;

@interface TRTCRemoteUserManager : NSObject

@property (retain, nonatomic) TRTCCloud *trtc;
@property (retain, nonatomic) NSMutableDictionary *users;
@property (readonly, nonatomic) NSDictionary *remoteUsers;
@property (readonly, nonatomic) NSMutableDictionary *mutableRemoteUsers;
@property (weak, nonatomic) id<TRTCRemoteUserManagerDelegate> delegate;

- (id)initWithTrtc:(id)a0;
- (void)addUser:(id)a0 roomId:(id)a1;
- (void)addOrUpdateUser:(id)a0 roomId:(id)a1;
- (void)removeUser:(id)a0;
- (void)updateUser:(id)a0 isVideoEnabled:(BOOL)a1;
- (void)updateUser:(id)a0 isAudioEnabled:(BOOL)a1;
- (void)setUser:(id)a0 isVideoMuted:(BOOL)a1;
- (void)setUser:(id)a0 isAudioMuted:(BOOL)a1;
- (void)setUser:(id)a0 fillMode:(long long)a1;
- (void)setUser:(id)a0 rotation:(long long)a1;
- (void)notifyRemoteUsersChanged;
- (void).cxx_destruct;

@end
