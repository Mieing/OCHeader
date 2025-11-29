@class NSMutableArray, BaseResponse;

@interface FinderLiveGetBoxMsgTipsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int nextIntervalMs;
@property (retain, nonatomic) NSMutableArray *boxReaddotList;

+ (void)initialize;

@end
