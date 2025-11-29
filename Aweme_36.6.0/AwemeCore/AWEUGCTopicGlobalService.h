@class NSString;

@interface AWEUGCTopicGlobalService : HTSService <AWEUGCTopicGlobalService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkIsSearchTopicPublishInnerFlow:(id)a0;
- (id)getInnerFlowSharedContextFromModel:(id)a0 withDelegate:(id)a1;
- (id)getInnerFlowSharedContextFromModel:(id)a0 withDelegate:(id)a1 withLogExtra:(id)a2 inScene:(unsigned long long)a3;
- (id)trackParamsForPublishOuterFlow:(id)a0;
- (id)UGCTopicServiceForServiceUID:(id)a0;
- (void)startShotWithPublishContext:(id)a0 completion:(id /* block */)a1;
- (id)createShotContext;
- (id)createShotContextWithPublishConfigParams:(id)a0;
- (id)createShotContextWithConfigModel:(id)a0;
- (id)processExtra:(id)a0 isOuter:(id)a1 withCompletion:(id /* block */)a2;
- (id)createUgcTopicPublishEntranceManager;

@end
