@class NSString;

@interface AWELiveBannerServiceImpl : NSObject <IESLiveBannerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPreciseFuseToken:(id)a0 tokenType:(id)a1 payload:(id)a2 stage:(long long)a3;

@end
