@interface BTMLog : NSObject

+ (void)onLogEventLevel:(unsigned long long)a0 domain:(id)a1 page:(id)a2 errorCode:(id)a3 message:(id)a4;
+ (void)onLogEventLevel:(unsigned long long)a0 domain:(id)a1 page:(id)a2 errorCode:(id)a3 message:(id)a4 extraCategory:(id)a5;
+ (void)onLogEventLevel:(unsigned long long)a0 domain:(id)a1 page:(id)a2 errorCode:(id)a3 messageDictionary:(id)a4 extraCategory:(id)a5;
+ (void)report:(id)a0 btmPage:(id)a1 domain:(id)a2 errorCode:(id)a3 extraCategory:(id)a4 level:(unsigned long long)a5 messageDictionary:(id)a6 node:(id)a7 pageBtm:(id)a8 pageItemArray:(id)a9 responderName:(id)a10;
+ (id)logGetBtmChainWithNode:(id)a0;
+ (void)trackWithServiceName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)reportErrorToApplogWithBtm:(id)a0 errorCode:(id)a1 category:(id)a2 extra:(id)a3;

@end
