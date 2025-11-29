@class NSString;

@interface MyInvoiceLogicMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ReportInvoiceClick:(long long)a0;
+ (id)getInvoiceSettingConfigRootDir;
+ (id)getInvoiceSettingConfinPath;
+ (BOOL)saveSettingData:(BOOL)a0;
+ (BOOL)getSettingData;

- (id)init;
- (void)dealloc;
- (void)GetInvoiceInfo:(unsigned int)a0;
- (void)SaveInvoiceInfo:(id)a0;
- (void)DeleteInvoiceInfo:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
