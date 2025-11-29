@class NSMutableArray, BaseResponse;

@interface BatchGetAppMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appMsgContextList;
@property (retain, nonatomic) NSMutableArray *sceneControlList;
@property (nonatomic) unsigned int itemExpireTime;
@property (nonatomic) unsigned int preloadLimitDispatchDelay;

+ (void)initialize;

- (void)setPreloadLimitDispatchDelay:(unsigned int)a0;
- (unsigned int)preloadLimitDispatchDelay;
- (void)setItemExpireTime:(unsigned int)a0;
- (unsigned int)itemExpireTime;
- (void)setSceneControlList:(id)a0;
- (id)sceneControlList;
- (void)setAppMsgContextList:(id)a0;
- (id)appMsgContextList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
