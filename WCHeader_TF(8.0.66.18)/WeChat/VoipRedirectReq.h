@class BaseRequest, NSMutableArray;

@interface VoipRedirectReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) int roomMemberId;
@property (nonatomic) int redirectOrientedFlg;
@property (nonatomic) int currentDuration;
@property (nonatomic) unsigned int nicCnt;
@property (retain, nonatomic) NSMutableArray *nicSet;
@property (nonatomic) unsigned int previousNetType;
@property (nonatomic) unsigned int currentNetType;
@property (nonatomic) unsigned long long timestamp64;

+ (void)initialize;

@end
