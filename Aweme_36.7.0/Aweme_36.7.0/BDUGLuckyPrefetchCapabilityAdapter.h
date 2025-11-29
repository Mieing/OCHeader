@class NSString;

@interface BDUGLuckyPrefetchCapabilityAdapter : NSObject <BDUGLuckyPrefetchCapabilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestWithModel:(id)a0 completion:(id /* block */)a1;
+ (BOOL)prefetchEnable;
+ (BOOL)prefetchEnableForH5;


@end
