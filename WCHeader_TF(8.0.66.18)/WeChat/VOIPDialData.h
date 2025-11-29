@class CContact, NSString, NSData, NSMutableArray;

@interface VOIPDialData : NSObject

@property (retain, nonatomic) NSData *mLocalPid;
@property (retain, nonatomic) NSData *mLocalCapInfo;
@property (retain, nonatomic) NSData *mRemotePid;
@property (retain, nonatomic) NSData *mRemoteCapInfo;
@property (nonatomic) int mStrategy;
@property (nonatomic) unsigned long long mRoomId;
@property (nonatomic) unsigned long long mRoomId64;
@property (nonatomic) int mRoomMemberId;
@property (nonatomic) long long mRoomKey;
@property (retain, nonatomic) CContact *mContact;
@property (retain, nonatomic) NSString *mCaller;
@property (retain, nonatomic) NSMutableArray *mRelaySvrIp;
@property (retain, nonatomic) NSMutableArray *mRelaySvrPort;
@property (retain, nonatomic) NSMutableArray *mPunchSvrIp;
@property (retain, nonatomic) NSMutableArray *mPunchSvrPort;
@property (retain, nonatomic) NSMutableArray *mPunchSvrIpStr;
@property (retain, nonatomic) NSMutableArray *mTcpSvrIp;
@property (retain, nonatomic) NSMutableArray *mTcpSvrPort;
@property (retain, nonatomic) NSMutableArray *mNatSvrAddr;
@property (retain, nonatomic) NSMutableArray *mRelayConns;
@property (retain, nonatomic) NSMutableArray *mDirectConns;
@property (retain, nonatomic) NSMutableArray *mNicWanApples;
@property (retain, nonatomic) NSMutableArray *mRelaySvrIpStr;
@property (retain, nonatomic) NSMutableArray *mTcpSvrIpStr;
@property (retain, nonatomic) NSData *mRemoteDirectInfo;
@property (nonatomic) int mDataChannelType;
@property (nonatomic) int mLinkDisconnectHbInterval;
@property (nonatomic) int mLinkDisconnectHbCnt;
@property (nonatomic) int mEncryptLength;
@property (retain, nonatomic) NSData *mClientSigns;
@property (nonatomic) int mARQStrategy;
@property (nonatomic) int mQosStrategyVideo;
@property (nonatomic) int mQosStrategyAudio;
@property (nonatomic) int mQosStrategyLink;
@property (nonatomic) int mARQCacheLen;
@property (nonatomic) int mARQRttThreshold;
@property (nonatomic) int mARQUsedRateThreshold;
@property (nonatomic) int mARQRespRateThreshold;
@property (nonatomic) int mEncryptStrategy;
@property (retain, nonatomic) NSData *mEncryptKey;
@property (nonatomic) int mRedirectReqThreshold;
@property (nonatomic) int mFECSvrCtr;
@property (retain, nonatomic) NSData *mFECKeyPara1;
@property (retain, nonatomic) NSData *mFECKeyPara2;
@property (nonatomic) int mBothSideGeneralSwitch;
@property (retain, nonatomic) NSData *mBothSideGeneralStrategy;
@property (retain, nonatomic) NSData *mGeneralStrategy;
@property (nonatomic) struct { int x0; short x1; int x2; short x3; short x4; short x5; short x6; double x7; double x8; short x9; short x10; double x11; double x12; short x13; short x14; double x15; double x16; short x17; short x18; double x19; double x20; short x21; short x22; double x23; double x24; short x25; short x26; double x27; double x28; short x29; short x30; double x31; double x32; short x33; short x34; double x35; double x36; short x37; short x38; double x39; double x40; short x41; short x42; double x43; double x44; short x45; short x46; } *mAudioSvrParams;
@property (retain, nonatomic) NSMutableArray *mCSSvrIp;
@property (retain, nonatomic) NSMutableArray *mCSSvrPort;
@property (retain, nonatomic) NSMutableArray *mCSTcpSvrIp;
@property (retain, nonatomic) NSMutableArray *mCSTcpSvrPort;
@property (nonatomic) int mCSTcpStartCnt;

- (id)init;
- (void)dealloc;
- (void)SetRoomId:(unsigned long long)a0;
- (void)SetRoomMemberId:(int)a0;
- (void)SetRoomKey:(long long)a0;
- (void)reset;
- (BOOL)isValidKey;
- (void).cxx_destruct;

@end
