@class NSString;
@protocol AVMDLCustomHttpDNSParser;

@interface AVMDLiOSCustomHttpDNSParser : NSObject <AVMDLiOSDNSProtocol>

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) id /* block */ result;
@property (weak, nonatomic) id<AVMDLCustomHttpDNSParser> httpDNSParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)a0 dnsParser:(id)a1;
- (void)_notifyError:(id)a0 async:(BOOL)a1;
- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;
- (long long)parserType;

@end
