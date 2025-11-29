@class NSString;

@interface MMBaseJsApiHandler : NSObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ callbackBlock;
@property (copy, nonatomic) NSString *systemInfoJsonStr;

- (void)dealloc;
- (void)setupApiWithJSContext:(id)a0 systemInfoJson:(id)a1;
- (void)addApi_kvReport:(id)a0;
- (void)addApi_idkeyReport:(id)a0;
- (void)addApi_idkeyListReport:(id)a0;
- (void)addApi_userAgent:(id)a0;
- (void)addApi_getPlatform:(id)a0;
- (void)addApi_reportCgi:(id)a0;
- (void)addApi_getSystemInfo:(id)a0;
- (void)onResponseBizCommReportCgi:(id)a0;
- (void)callbackWithId:(id)a0 params:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
