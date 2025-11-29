@class NSString;

@interface AWEVCDFollowAuthorizeServiceImp : HTSService <AWEVCDFollowAuthorizeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAuthorizeRelation;
+ (void)requestRegularBar:(id /* block */)a0 scene:(unsigned long long)a1;
+ (void)showAlert:(id)a0 scene:(unsigned long long)a1 complete:(id /* block */)a2;
+ (id)topBubble:(id)a0 scene:(unsigned long long)a1 complete:(id /* block */)a2;
+ (id)bottomBubble:(id)a0 scene:(unsigned long long)a1 complete:(id /* block */)a2;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;

- (id)aAWEMainModuleServiceDOUYINHTSAdaper;

@end
