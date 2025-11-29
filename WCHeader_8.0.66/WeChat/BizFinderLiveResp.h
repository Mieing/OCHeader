@class NSData, NSMutableArray, BaseResponse;

@interface BizFinderLiveResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveInfo;
@property (retain, nonatomic) NSData *pagingBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int listRefreshInterval;
@property (nonatomic) unsigned int specifiedRefreshInterval;
@property (nonatomic) unsigned int keepDataInterval;
@property (nonatomic) unsigned int funcFlag;

+ (void)initialize;

@end
