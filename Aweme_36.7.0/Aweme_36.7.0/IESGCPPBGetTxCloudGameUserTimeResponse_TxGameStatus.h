@interface IESGCPPBGetTxCloudGameUserTimeResponse_TxGameStatus : GPBMessage

@property (nonatomic) BOOL isFree;
@property (nonatomic) long long freeStartTime;
@property (nonatomic) long long freeEndTime;
@property (nonatomic) long long availableFreeDays;

+ (id)descriptor;

@end
