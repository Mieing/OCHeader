@interface APayProcessor : NSObject

@property (copy, nonatomic) id /* block */ routeBlock;
@property (copy, nonatomic) id /* block */ tidrouteBlock;
@property (copy, nonatomic) id /* block */ inforouteBlock;

- (id)utdid;
- (void)processOrder:(id)a0 callback:(id /* block */)a1;
- (void)processAuthInfo:(id)a0 callback:(id /* block */)a1;
- (void)processGenTid:(id /* block */)a0;
- (void)processGetConfigInfo:(id /* block */)a0;
- (void)processLog:(id)a0 callback:(id /* block */)a1;
- (void)processMdapLog:(id)a0 callback:(id /* block */)a1;
- (void)procBizReqInfo:(id)a0 reqType:(id)a1 callback:(id /* block */)a2;
- (void)callbackWithReqType:(id)a0 result:(id)a1;
- (void)procLogReqInfo:(id)a0 callback:(id /* block */)a1;
- (void)procMdapLogReqInfo:(id)a0 callback:(id /* block */)a1;
- (void)postReqWithUrl:(id)a0 showLoading:(BOOL)a1 isLogReq:(BOOL)a2 infoData:(struct APTaskInfoData { unsigned char x0[30]; })a3 headerDict:(id)a4 requestData:(id)a5 success:(id /* block */)a6 fail:(id /* block */)a7;
- (BOOL)shouldDismissLoading:(id)a0;
- (id)reqDataWithBizDict:(id)a0 actDict:(id)a1 zipType:(long long *)a2 info:(struct APTaskInfoData { unsigned char x0[30]; })a3 newApiVer:(BOOL)a4;
- (id)reqDataWithLogDict:(id)a0 zipType:(long long *)a1 info:(struct APTaskInfoData { unsigned char x0[30]; })a2;
- (id)reqDataWithProto:(id)a0 andParam:(id)a1 andZipType:(long long *)a2 info:(struct APTaskInfoData { unsigned char x0[30]; })a3;
- (id)netUtilDic:(BOOL)a0;
- (id)mainActionDic;
- (id)infoActionDic;
- (id)gentidActionDic;
- (id)enCryptGzipData:(id)a0 zipType:(long long *)a1 info:(struct APTaskInfoData { unsigned char x0[30]; })a2;
- (id)deCryptGzipData:(id)a0 zipType:(long long)a1 info:(struct APTaskInfoData { unsigned char x0[30]; })a2 isLogReq:(BOOL)a3;
- (id)gzipCompressWithData:(id)a0;
- (id)gzipDecompressWithData:(id)a0;
- (id)processRepData:(id)a0 zipType:(long long)a1 infoData:(struct APTaskInfoData { unsigned char x0[30]; })a2 isLogReq:(BOOL)a3;
- (id)parseResponseDict:(id)a0;
- (id)processDataWithJson:(id)a0;
- (BOOL)needUpdatePublicKeyWithJson:(id)a0;
- (long long)getZipTypeFromHeader:(id)a0;
- (id)analyseJSCommand:(id)a0;
- (id)processJSCommand:(id)a0;
- (BOOL)isActionNotNeedWifiInfo:(id)a0;
- (void).cxx_destruct;
- (id)appInfo;
- (void)setDeviceInfo:(id)a0;

@end
