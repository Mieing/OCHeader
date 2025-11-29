@class NSMutableArray, BaseResponse;

@interface BatchGetAppMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appMsgContextList;
@property (retain, nonatomic) NSMutableArray *sceneControlList;
@property (nonatomic) unsigned int itemExpireTime;
@property (nonatomic) unsigned int preloadLimitDispatchDelay;

+ (void)initialize;

@end
