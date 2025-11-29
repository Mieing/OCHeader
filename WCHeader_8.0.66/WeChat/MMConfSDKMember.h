@class NSString;

@interface MMConfSDKMember : NSObject <MultiTalkMemberProtocol>

@property (readonly, nonatomic) NSString *mUserName;
@property (readonly, nonatomic) int mStatus;
@property (readonly, nonatomic) NSString *callerName;
@property (readonly, nonatomic) int memberId;
@property (readonly, nonatomic) unsigned long long screenSharingPresetationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int memberId;
@property (retain, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *mUserName;
@property (copy, nonatomic) NSString *mInviteUserName;
@property (nonatomic) int mStatus;
@property (nonatomic) int mReason;
@property (nonatomic) long long mInviteTime;
@property (nonatomic) int mHoldStatus;
@property (nonatomic) int mScreenStatus;
@property (copy, nonatomic) NSString *callerName;

- (void).cxx_destruct;

@end
