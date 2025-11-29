@class NSSet, NSString, HostList;

@interface IDCHostMgr : MMUserService <MMServiceProtocol>

@property (retain) HostList *axHostList;
@property (retain) NSSet *axHostSet;
@property (retain) NSSet *mainHostSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetRealHostFromHost:(id)a0;
+ (id)GetLocalHostListWithType:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a0;
+ (void)updateCertRegion:(unsigned int)a0;
+ (unsigned int)GetMMTlsRegion;
+ (void)ClearMMTlsAllPsk;
+ (void)TryClearMMtlsForbidenHostAndPsk;
+ (void)ClearMMtlsForbidenHostAndPsk;
+ (void)tryTestMMTlsRegion;

- (id)getAnyMainHost;
- (id)getAnyAxHost;
- (BOOL)isInMainHostList:(id)a0;
- (BOOL)isInAxHostList:(id)a0;
- (void)HandleAxHostListFromPB:(id)a0;
- (void)InnerDispatchExtHostList:(id)a0 fromFunc:(id)a1;
- (void)HandleHostListFromPB:(id)a0;
- (void)HandleIPListFromPB:(id)a0 PortList:(id)a1 TimeOutList:(id)a2;
- (void)HandleNetworkSectResp:(id)a0;
- (void)changeDebugIpIfNeeded;
- (void).cxx_destruct;

@end
