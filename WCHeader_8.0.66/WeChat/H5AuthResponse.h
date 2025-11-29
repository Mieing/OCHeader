@class NSString, MMTransferCgiInfoList, BaseResponse;

@interface H5AuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *h5Authtoken;
@property (nonatomic) unsigned int expiredtime;
@property (retain, nonatomic) NSString *pubkeytoken;
@property (retain, nonatomic) MMTransferCgiInfoList *cgiInfoList;
@property (nonatomic) unsigned int enableDynamicRouting;

+ (void)initialize;

- (void)setEnableDynamicRouting:(unsigned int)a0;
- (unsigned int)enableDynamicRouting;
- (void)setCgiInfoList:(id)a0;
- (id)cgiInfoList;
- (void)setPubkeytoken:(id)a0;
- (id)pubkeytoken;
- (void)setExpiredtime:(unsigned int)a0;
- (unsigned int)expiredtime;
- (void)setH5Authtoken:(id)a0;
- (id)h5Authtoken;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
