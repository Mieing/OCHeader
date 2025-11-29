@class NSArray, NSTimer, NSString, NSMutableArray;
@protocol NetworkRTTLevelListener;

@interface TTVideoEngineNetworkPortraitData : NSObject

@property (nonatomic) long long mNetMinDataSize;
@property (nonatomic) long long mNetLevelMaxCount;
@property (nonatomic) long long mNetTimerTaskIntervalMs;
@property (retain, nonatomic) NSMutableArray *mCatowerRttList;
@property (retain, nonatomic) NSMutableArray *mCatowerRttMsList;
@property (retain, nonatomic) NSMutableArray *mNetTypeList;
@property (retain, nonatomic) NSMutableArray *mMdlSpeedList;
@property (weak, nonatomic) id<NetworkRTTLevelListener> RTTLevelListener;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double mLastTargetBitrate;
@property (copy, nonatomic) NSArray *mParameters;
@property (copy, nonatomic) NSString *mVarsToParse;
@property (nonatomic) double mLinkFuncOffset;

+ (id)sharedInstance;

- (int)getRTTMs;
- (int)getRTTLevel;
- (id)getRttHistoryData:(int)a0;
- (id)getRttMsHistoryData:(int)a0;
- (id)getNetSpeedHistoryData:(int)a0;
- (void)setNetSpeed:(float)a0;
- (void)setnetType:(id)a0;
- (void)setMinDataSize:(long long)a0;
- (void)setmVarsToParse:(id)a0;
- (void)startRttListen;
- (double)calculateTargetBitrate:(id)a0 speedList:(id)a1 netType:(id)a2;
- (void)setRttListener:(id)a0;
- (double)getLastTargetBitrate;
- (void)rttListen;
- (id)getSubListToMeetMinSize:(id)a0 size:(int)a1;
- (void)parseVariable:(id)a0;
- (id)getRttList;
- (id)getRttMsList;
- (id)getNetTypeList;
- (id)getMdlSpeedList;
- (void).cxx_destruct;
- (void)setMaxCount:(long long)a0;
- (id)init;
- (void)setSampleInterval:(long long)a0;
- (void)dealloc;

@end
