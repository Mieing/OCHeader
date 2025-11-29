@class NSString, BaseResponse;

@interface FFHBQueryDoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) unsigned int surplusNum;
@property (retain, nonatomic) NSString *clearTips;
@property (retain, nonatomic) NSString *clearActionTips;

+ (void)initialize;

@end
