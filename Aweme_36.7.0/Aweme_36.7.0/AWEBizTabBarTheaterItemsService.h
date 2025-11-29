@class NSString;

@interface AWEBizTabBarTheaterItemsService : HTSService <AWEBizTabBarTheaterItemsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showUnreadBadgeWithComponentID:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2 downgradeCallBack:(id /* block */)a3;

@end
