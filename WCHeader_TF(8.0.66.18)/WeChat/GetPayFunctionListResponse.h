@class NSString, BaseResponse;

@interface GetPayFunctionListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *payFunctionList;
@property (nonatomic) unsigned int notShowTutorial;
@property (nonatomic) unsigned int cacheTime;
@property (nonatomic) unsigned int isShowSetting;

+ (void)initialize;

@end
