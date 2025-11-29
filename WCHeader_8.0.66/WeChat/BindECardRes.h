@class NSString, OpenSuccItem, PopItem, BaseResponse;

@interface BindECardRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) PopItem *guideInfo;
@property (retain, nonatomic) OpenSuccItem *succTips;

+ (void)initialize;

@end
