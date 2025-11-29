@class NSString;

@interface DevicePingResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int roomStatus;
@property (nonatomic) int deviceStatus;
@property (copy, nonatomic) NSString *disconnectToast;

+ (id)descriptor;

@end
