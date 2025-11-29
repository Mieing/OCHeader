@class NSString, HTSLiveUser;

@interface IESLiveChatChannelLinkmicUserWrapper : NSObject <IESLiveLinkmicUser>

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL isCheckLinkersReporter;
@property (copy, nonatomic) NSString *linkmicID;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) BOOL isLinked;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) long long volume;
@property (nonatomic) BOOL isInvite;
@property (nonatomic) BOOL isApply;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mergeListUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)merge:(id)a0;

@end
