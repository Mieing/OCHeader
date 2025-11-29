@class NSString, HHService;
@protocol HHServiceBrowserDelegate;

@interface HHServiceBrowser : HHServiceDiscoveryOperation

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) unsigned int browseInterfaceIndex;
@property (nonatomic) BOOL browseIncludeP2P;
@property (retain, nonatomic) HHService *resolver;
@property (weak, nonatomic) id<HHServiceBrowserDelegate> delegate;

- (BOOL)beginBrowse:(unsigned int)a0 includeP2P:(BOOL)a1;
- (id)resolverForService:(id)a0;
- (void)browserReceviedResult:(int)a0 interfaceIndex:(unsigned int)a1 serviceName:(id)a2 serviceDomain:(id)a3 add:(BOOL)a4 moreComing:(BOOL)a5;
- (BOOL)beginBrowse;
- (BOOL)beginBrowseOverBluetoothOnly;
- (void)endBrowse;
- (BOOL)resolveService:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)identityString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 domain:(id)a1;

@end
