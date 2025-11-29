@class HTSLiveUser;

@interface AnchorLinkmicRecordsResponse_RecordInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long count;

+ (id)descriptor;

@end
