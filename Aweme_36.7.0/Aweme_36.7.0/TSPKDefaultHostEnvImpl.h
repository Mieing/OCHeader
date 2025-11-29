@class NSString;

@interface TSPKDefaultHostEnvImpl : NSObject <TSPKHostEnvProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userRegion;
- (id)urlIfTopIsWebViewController;
- (id)extraBizInfoWithGuardScene:(id)a0 permissionType:(id)a1;
- (id)extraCommonBizInfoWithGuardScene:(id)a0 permissionType:(id)a1;
- (BOOL)isEventBlocked:(id)a0;

@end
