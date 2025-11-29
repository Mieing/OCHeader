@class NSString, NSArray, NSObject, NSNumber;

@interface IESLiveInteractionGuestLinkerContext : NSObject <IESLiveLinkmicJoinChannelContext, IESLiveLinkmicLeaveChannelContext, IESLiveLinkmicListChangedContext, IESLiveLinkmicLinkCreateContext, IESLiveLinkmicLinkCloseContext>

@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *promptString;
@property (retain, nonatomic) NSObject *rawData;
@property (copy, nonatomic) NSString *joinedUserID;
@property (copy, nonatomic) NSString *leaveUserID;
@property (copy, nonatomic) NSArray *linkedUserList;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkerSessionId;
@property (readonly, copy, nonatomic) NSString *remoteLinkerSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *banAnchorUserId;

- (id)waitingUserList;
- (long long)dataSyncVersion;
- (BOOL)shouldMuteAudioAfterJoined;
- (id)commonInfo;
- (void).cxx_destruct;
- (id)extraData;

@end
