@class NSString;

@interface AWEEffectPlatformRequestManager : NSObject <EffectPlatformRequestDelegate>

@property (nonatomic) long long requestOptimizeAbKey;
@property (nonatomic) double requestTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadFileWithURLString:(id)a0 downloadPath:(id)a1 downloadProgress:(id *)a2 completion:(id /* block */)a3;
- (void)requestWithURLString:(id)a0 parameters:(id)a1 headerFields:(id)a2 httpMethod:(id)a3 completion:(id /* block */)a4;

@end
