@class NSString, MMTransferCgiInfoList, BaseResponse;

@interface H5AuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *h5Authtoken;
@property (nonatomic) unsigned int expiredtime;
@property (retain, nonatomic) NSString *pubkeytoken;
@property (retain, nonatomic) MMTransferCgiInfoList *cgiInfoList;
@property (nonatomic) unsigned int enableDynamicRouting;

+ (void)initialize;

@end
