@class NSMutableArray, BaseResponse;

@interface KidsWatchLoginConfirmGetResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *kidsList;
@property (nonatomic) unsigned int enableRegButton;
@property (nonatomic) unsigned int reqSessionLimit;
@property (nonatomic) BOOL needShowSyncMsgButton;

+ (void)initialize;

@end
