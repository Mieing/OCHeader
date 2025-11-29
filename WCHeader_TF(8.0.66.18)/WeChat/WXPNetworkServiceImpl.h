@class NSString;

@interface WXPNetworkServiceImpl : NSObject <PBMessageObserverDelegate, MMKNetworkService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)getBaseRequest:(int)a0;
- (void)invoke:(id)a0 mockManager:(id)a1;
- (unsigned long long)getCgiNewDNSBusinessType:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
