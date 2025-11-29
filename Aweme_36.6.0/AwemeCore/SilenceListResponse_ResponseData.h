@class HTSLiveUser;

@interface SilenceListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) HTSLiveUser *opUser;
@property (nonatomic) BOOL hasOpUser;
@property (nonatomic) long long opTime;
@property (nonatomic) BOOL isExceededAddition;

+ (id)descriptor;

@end
