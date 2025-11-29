@class NSString;

@interface GetPanelExtraInfoResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userUniqId;
@property (copy, nonatomic) NSString *devTransferKey;
@property (copy, nonatomic) NSString *keyVersion;

+ (id)descriptor;

@end
