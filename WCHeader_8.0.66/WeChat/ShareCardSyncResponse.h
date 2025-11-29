@class NSMutableArray, BaseResponse;

@interface ShareCardSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) int waitTime;

+ (void)initialize;

@end
