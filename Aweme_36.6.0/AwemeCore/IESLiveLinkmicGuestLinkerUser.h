@class NSString, HTSLiveLinkmicGuestLinkUser, HTSLiveUser;

@interface IESLiveLinkmicGuestLinkerUser : NSObject <IESLiveLinkmicUser>

@property (nonatomic) unsigned long long score;
@property (nonatomic) int role;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkUser *guestLinkUser;
@property (nonatomic) unsigned long long talking;
@property (retain, nonatomic) HTSLiveUser *user;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) BOOL isWaiting;
@property (readonly, nonatomic) BOOL isInvite;
@property (readonly, nonatomic) BOOL isApply;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) long long volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUser:(id)a0;

@end
