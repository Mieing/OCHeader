@class NSMutableArray, BaseResponse;

@interface UpdateRoamDataResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseresponse;
@property (nonatomic) BOOL needSync;
@property (nonatomic) unsigned long long maxRoamDataVersion;
@property (retain, nonatomic) NSMutableArray *roamData;
@property (retain, nonatomic) NSMutableArray *skipContactName;
@property (retain, nonatomic) NSMutableArray *failContactName;

+ (void)initialize;

@end
