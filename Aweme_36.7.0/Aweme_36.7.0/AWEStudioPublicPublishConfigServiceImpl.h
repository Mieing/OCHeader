@class NSString;

@interface AWEStudioPublicPublishConfigServiceImpl : NSObject <AWEStudioPublicPublishConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishTitleConfigWithPublishModel:(id)a0;
- (void)trackPublishTitleLimitWithScene:(id)a0 maxTitleLength:(long long)a1 from:(id)a2;

@end
