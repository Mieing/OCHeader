@class NSArray, NSString;

@interface BizTLResortEventInfo : NSObject

@property (nonatomic) long long sessionId;
@property (nonatomic) int unreadMsgCount;
@property (nonatomic) int unExposeMsgCount;
@property (nonatomic) int unValidExposeMsgCount;
@property (retain, nonatomic) NSArray *unreadMsgTimeStampList;
@property (nonatomic) int covBoxIndex;
@property (nonatomic) long long digestMsgBizUin;
@property (nonatomic) long long digestMsgId;
@property (nonatomic) int digestMsgIdx;
@property (retain, nonatomic) NSString *digestWording;

+ (id)initWithSessionId:(long long)a0;
+ (id)initWithSessionId:(long long)a0 unreadMsgCount:(int)a1 unExposeMsgCount:(int)a2 unValidExposeMsgCount:(int)a3 unreadMsgTimeStampList:(id)a4 covBoxIndex:(int)a5 digestMsgBizUin:(long long)a6 digestMsgId:(long long)a7 digestMsgIdx:(int)a8 digestWording:(id)a9;

- (void).cxx_destruct;

@end
