@class BaseRequest, NSString, NSMutableArray;

@interface UploadSportRecordReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *sportRecordList;
@property (retain, nonatomic) NSMutableArray *sportGoalList;

+ (void)initialize;

@end
