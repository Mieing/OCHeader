@class NSString;

@interface IESGCPLeftSideBarEntranceService_Douyin : NSObject <IESGCPLeftSideBarEntranceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAnimationWithImage:(id)a0 businessID:(id)a1 businessSubId:(id)a2 popViewContent:(id)a3 completion:(id /* block */)a4;
- (BOOL)isLeftSideBarEntranceExist;

@end
