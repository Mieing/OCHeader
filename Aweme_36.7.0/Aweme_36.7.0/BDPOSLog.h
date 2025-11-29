@class NSObject;
@protocol OS_os_log;

@interface BDPOSLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *logger;
@property (class) unsigned long long logid_1;
@property (class) unsigned long long logid_2;
@property (class) unsigned long long logid_3;

@end
