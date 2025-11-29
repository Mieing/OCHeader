@class NSString, IESLiveShowPaidLiveTicketEditPageUploadConfigModel;

@interface IESLiveShowPaidLiveTicketEditPageImageXInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *getUrlAPI;
@property (retain, nonatomic) IESLiveShowPaidLiveTicketEditPageUploadConfigModel *uploadConfig;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
