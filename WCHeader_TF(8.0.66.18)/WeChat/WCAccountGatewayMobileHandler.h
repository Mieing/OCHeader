@class NSString, NSMutableArray, MobileInfo;

@interface WCAccountGatewayMobileHandler : NSObject

@property (retain, nonatomic) NSString *business;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (retain, nonatomic) NSMutableArray *urlDownloaders;
@property (retain, nonatomic) MobileInfo *pureMobileResult;

+ (id)AllCelluarIpAddrList;

- (id)getChannelTokens;
- (BOOL)asyncGetMaskedMobileWithBusiness:(id)a0 completionBlock:(id /* block */)a1;
- (void)realStartGetMaskedMobileWithBusiness:(id)a0 cellularIps:(id)a1 completionBlock:(id /* block */)a2;
- (void)batchRequestWithGatewayUrlResp:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)asyncGetPureMobileWithComplectionBlock:(id /* block */)a0;
- (void)getMobileWithTokens:(id)a0 msgId:(id)a1 mobileType:(int)a2 timeout:(unsigned int)a3 completionBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
