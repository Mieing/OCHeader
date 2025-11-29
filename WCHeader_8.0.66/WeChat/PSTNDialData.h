@class NSString, CContact, NSData, NSMutableArray;

@interface PSTNDialData : NSObject

@property (nonatomic) int mRoomId;
@property (nonatomic) int mRoomMemberId;
@property (nonatomic) long long mRoomKey;
@property (retain, nonatomic) CContact *mContact;
@property (copy, nonatomic) NSString *mCaller;
@property (nonatomic) int mCallType;
@property (copy, nonatomic) NSString *mPhoneNum;
@property (copy, nonatomic) NSString *mRetPhoneNumber;
@property (retain, nonatomic) NSMutableArray *mRelaySvrIp;
@property (retain, nonatomic) NSMutableArray *mRelaySvrPort;
@property (retain, nonatomic) NSMutableArray *mPunchSvrIp;
@property (retain, nonatomic) NSMutableArray *mPunchSvrPort;
@property (retain, nonatomic) NSMutableArray *mRelayTcpSvrIp;
@property (retain, nonatomic) NSMutableArray *mRelayTcpSvrPort;
@property (nonatomic) int mLinkDisconnectHbInterval;
@property (nonatomic) int mLinkDisconnectHbCnt;
@property (nonatomic) int mEncryptStrategy;
@property (retain, nonatomic) NSData *mEncryptKey;
@property (nonatomic) long long mCallSeq;
@property (nonatomic) int mInviteRet;
@property (nonatomic) int mIsGotRing;
@property (nonatomic) int mIsGotAnswer;
@property (nonatomic) int mIsGotShutdown;
@property (nonatomic) int mIsSendCancel;
@property (nonatomic) int mIsSendShutdown;
@property (nonatomic) unsigned long long mInviteTime;
@property (nonatomic) unsigned long long mRingRecvTime;
@property (nonatomic) unsigned long long mAnswerRecvTime;
@property (nonatomic) unsigned long long mStopTalkTime;
@property (nonatomic) unsigned long long mConnectTime;
@property (nonatomic) unsigned long long mCancelTime;
@property (nonatomic) int mEncryptLength;
@property (retain, nonatomic) NSData *mClientSigns;
@property (retain, nonatomic) NSString *mCountryCode;
@property (nonatomic) int mSwitchTcpPktCnt;
@property (nonatomic) unsigned int mKeypadNumberClickCount;
@property (nonatomic) unsigned int mCallFlag;

- (id)init;
- (void)dealloc;
- (void)SetRoomId:(int)a0;
- (void)SetRoomMemberId:(int)a0;
- (void)SetRoomKey:(long long)a0;
- (void)reset;
- (BOOL)isValidKey;
- (void).cxx_destruct;

@end
