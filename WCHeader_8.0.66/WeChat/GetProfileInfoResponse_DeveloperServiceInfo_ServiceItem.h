@class NSString, GetProfileInfoResponse_DeveloperServiceInfo_ServiceWxaItem;

@interface GetProfileInfoResponse_DeveloperServiceInfo_ServiceItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int serviceType;
@property (nonatomic) BOOL hasAuth;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) GetProfileInfoResponse_DeveloperServiceInfo_ServiceWxaItem *wxaItem;
@property (retain, nonatomic) NSString *serviceNameEn;
@property (nonatomic) unsigned int serviceId;

+ (void)initialize;

@end
