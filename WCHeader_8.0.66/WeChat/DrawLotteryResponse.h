@class NSString, ExposureInfo, BaseResponse;

@interface DrawLotteryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) ExposureInfo *exposureInfo;

+ (void)initialize;

@end
