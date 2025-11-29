@class IESGCPPBGetTxCloudGameUserTimeResponse_TxGameStatus;

@interface IESGCPPBGetTxCloudGameUserTimeResponse_Data : GPBMessage

@property (nonatomic) BOOL isVip;
@property (nonatomic) long long availableTimeMin;
@property (retain, nonatomic) IESGCPPBGetTxCloudGameUserTimeResponse_TxGameStatus *gameStatus;
@property (nonatomic) BOOL hasGameStatus;

+ (id)descriptor;

@end
