@class NSData, NSString, NSURLResponse;

@interface BDXForestPIACacheResponse : NSObject <BDWebResourceCacheResponseProtocol>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURLResponse *response;
@property (copy, nonatomic) NSString *cacheSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
