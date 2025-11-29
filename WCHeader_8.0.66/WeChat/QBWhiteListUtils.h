@class QBWhiteList, NSObject;

@interface QBWhiteListUtils : NSObject {
    QBWhiteList *_performanceReportWhiteList;
    NSObject *_performanceReportLockObj;
    QBWhiteList *_dnsUDPWhiteList;
    NSObject *_dnsUDPLockObj;
    QBWhiteList *_forceProxyWhiteList;
    NSObject *_forceProxyLockObj;
    QBWhiteList *_qProxyWhiteList;
    NSObject *_QProxyLockObj;
    QBWhiteList *_atsVideoWhiteList;
    NSObject *_atsVideoLockObj;
    QBWhiteList *_urlReportWhiteList;
    NSObject *_urlReportLockObj;
    QBWhiteList *_dnsHTTPWhiteList;
    NSObject *_dnsHTTPLockObj;
}

+ (id)sharedInstance;

- (id)init;
- (id)performanceReportWhiteList;
- (id)dnsUDPWhiteList;
- (void)cleanQProxyTempWhiteList;
- (id)qProxyWhiteList;
- (void)cleanForceProxyTempWhiteList;
- (id)forceProxyWhiteList;
- (id)ATSVideoWhiteList;
- (id)urlReportWhiteList;
- (id)dnsHTTPWhiteList;
- (void).cxx_destruct;

@end
