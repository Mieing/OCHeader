@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetFriendBoxLiveMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *appMsgList;
@property (nonatomic) unsigned int nextIntervalMs;
@property (nonatomic) BOOL hasNewMsg;
@property (nonatomic) BOOL needClearMsg;

+ (void)initialize;

@end
