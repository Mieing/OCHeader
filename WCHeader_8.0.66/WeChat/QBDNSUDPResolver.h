@class NSString;

@interface QBDNSUDPResolver : NSObject <QBDNSResolverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)query:(id)a0 error:(id *)a1;

@end
