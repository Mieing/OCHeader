@class NSString, NSObject;
@protocol AVMDLCustomHttpDNSParser, OS_dispatch_queue, AVMDLiOSDNSProtocol;

@interface AVMDLiOSDNSParserAction : NSObject <AVMDLiOSCancelable>

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) double waitSecond;
@property (nonatomic) long long backupType;
@property (nonatomic) long long mainType;
@property (nonatomic) long long enableParallel;
@property (retain, nonatomic) id<AVMDLiOSDNSProtocol> mainParser;
@property (retain, nonatomic) id<AVMDLiOSDNSProtocol> backParser;
@property (weak, nonatomic) id<AVMDLCustomHttpDNSParser> customParser;
@property (copy, nonatomic) id /* block */ result;
@property BOOL mainFinished;
@property BOOL backupFinished;
@property (copy, nonatomic) id /* block */ outResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dnsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startBackupParser;
- (id)_getItemInfo:(id)a0 info:(id)a1;
- (id)_parserWithType:(long long)a0;
- (id)_errorDomain:(long long)a0;
- (void)setCustomHttpDNS:(id)a0;
- (double)waitSec;
- (long long)mainDNSType;
- (long long)backupDNSType;
- (void)configMainParseType:(long long)a0 backup:(long long)a1 wait:(double)a2 enableParallel:(long long)a3;
- (void)_dealWithResult:(id)a0 error:(id)a1 dnsType:(long long)a2;
- (void)setLocalDnsQueue:(id)a0;
- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;
- (long long)parallel;

@end
