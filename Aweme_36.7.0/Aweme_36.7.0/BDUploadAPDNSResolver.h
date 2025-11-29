@class NSString;

@interface BDUploadAPDNSResolver : NSObject

@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *ipAdrress;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) int isResult;
@property (nonatomic) long long player;

- (void)getaddreinfo_start:(const char *)a0;
- (int)getaddrinfo_result:(char *)a0 strSize:(int)a1;
- (void)getaddrinfo_free;
- (BOOL)checkHostNameIsIP:(id)a0;
- (void)parseDNS;
- (id)parseResult:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
