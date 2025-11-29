@class NSMutableArray, BaseResponse;

@interface TimelineGetOftenReadBizResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *bizInfoList;
@property (nonatomic) unsigned int displayCtrlFlag;
@property (nonatomic) unsigned int serverRankOftenReadBiz;
@property (nonatomic) unsigned int greenPointStayTimeInSec;
@property (retain, nonatomic) NSMutableArray *normalBizInfoList;
@property (retain, nonatomic) NSMutableArray *seldomReadBizInfoList;
@property (nonatomic) unsigned int specifiedRefreshInterval;
@property (nonatomic) BOOL showFinderLive;

+ (void)initialize;

@end
