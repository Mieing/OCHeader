@class NSMutableArray, BaseResponse;

@interface GetAppSettingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int appCount;
@property (retain, nonatomic) NSMutableArray *settingList;

+ (void)initialize;

@end
