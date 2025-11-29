@class NSString;

@interface TTDownloadTTNetManager : NSObject <TTDownloadRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeErrorCodeIfCanceledByCronetInternal:(id)a0;

- (id)getContentLengthWithModel:(id)a0;
- (void)tryDynamicThrottle:(id)a0 speed:(long long)a1 throttleSpeed:(long long)a2;
- (id)downloadWithRacing:(id)a0;
- (id)downloadWithChunkedInterface:(id)a0;
- (id)downloadWithNormalInterface:(id)a0;
- (id)downloadRequestWithModel:(id)a0;

@end
