@class NSString, BtnInfo, NSMutableArray, BaseResponse;

@interface ExposureInfoModifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSMutableArray *singleExposureInfoList;
@property (nonatomic) unsigned int isShowBtn;
@property (retain, nonatomic) BtnInfo *btnInfo;

+ (void)initialize;

@end
