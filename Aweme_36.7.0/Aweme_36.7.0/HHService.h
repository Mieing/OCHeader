@class ResolveResult, NSString, NSArray, NSData, NSMutableArray;
@protocol HHServiceDelegate;

@interface HHService : HHServiceDiscoveryOperation

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL resolved;
@property (retain, nonatomic) NSString *resolvedHostName;
@property (retain, nonatomic) NSArray *resolvedAddressInfo;
@property (retain, nonatomic) NSData *txtData;
@property (readonly, nonatomic) ResolveResult *currentResolveResult;
@property (retain, nonatomic) NSMutableArray *resolveResults;
@property (nonatomic) unsigned short lastResolvedPort;
@property (nonatomic) unsigned int addressLookupProtocols;
@property (nonatomic) BOOL resolveHostNameOnly;
@property (weak, nonatomic) id<HHServiceDelegate> delegate;
@property (readonly, nonatomic) unsigned int browsedInterfaceIndex;
@property (readonly, nonatomic) unsigned short resolvedPortNumber;
@property (readonly, nonatomic) NSArray *resolvedAddressStrings;

- (void)getNextAddressInfo;
- (void)dnsServiceError:(int)a0;
- (id)initWithName:(id)a0 type:(id)a1 domain:(id)a2 browsedInterfaceIndex:(unsigned int)a3;
- (BOOL)beginResolve:(unsigned int)a0 includeP2P:(BOOL)a1;
- (BOOL)beginResolve:(unsigned int)a0 includeP2P:(BOOL)a1 addressLookupProtocols:(unsigned int)a2;
- (BOOL)beginResolve:(unsigned int)a0 hostNameOnly:(BOOL)a1 includeP2P:(BOOL)a2 addressLookupProtocols:(unsigned int)a3;
- (BOOL)beginResolveOfHostName:(unsigned int)a0 includeP2P:(BOOL)a1;
- (void)didResolveService:(id)a0 moreComing:(BOOL)a1 error:(int)a2;
- (void)didResolveServiceAddress:(id)a0 moreComing:(BOOL)a1 error:(int)a2;
- (BOOL)beginResolve;
- (BOOL)beginResolveOnBrowsedInterface;
- (BOOL)beginResolveOverBluetoothOnly;
- (BOOL)beginResolveOfHostName;
- (BOOL)beginResolveOfHostNameOnBrowsedInterface;
- (BOOL)beginResolveOfHostNameOverBluetoothOnly;
- (void)endResolve;
- (void).cxx_destruct;
- (id)description;
- (id)identityString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 domain:(id)a2;

@end
