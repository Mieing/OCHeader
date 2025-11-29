@class NSString;

@interface QBDNSHTTPDESResolver : NSObject <QBDNSResolverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)parseDNSInfo:(id)a0 result:(id *)a1;
- (id)query:(id)a0 error:(id *)a1;

@end
