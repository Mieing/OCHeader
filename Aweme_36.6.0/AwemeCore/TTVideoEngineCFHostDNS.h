@class NSString, NSError;

@interface TTVideoEngineCFHostDNS : TTVideoEngineDNSBase

@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) unsigned long long maxCount;
@property (retain, nonatomic) NSError *error;

- (void)parseDNS;
- (void)notifyError:(id)a0;
- (void)notifySuccess:(id)a0;
- (id)parseResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithHostname:(id)a0;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
