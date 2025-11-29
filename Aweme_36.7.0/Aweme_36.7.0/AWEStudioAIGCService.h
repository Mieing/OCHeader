@class NSString;

@interface AWEStudioAIGCService : HTSService <AWEStudioAIGCServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transFormUgcTypeToDescriptionPrefix:(unsigned long long)a0;
+ (void)enterFriendLoraWithSticker:(id)a0 effectModel:(id)a1 darkMode:(id)a2 extraDict:(id)a3;
+ (void)enterUGCFusionCreationToolsWithExtraDict:(id)a0;
+ (id)latestUGCFusionCreationToolsModel;
+ (void)saveUGCFusionCreationToolsModel:(id)a0;
+ (void)removeLatestUGCFusionCreationToolsModel;

- (void)fetchEffectListWithEffectIDS:(id)a0 completion:(id /* block */)a1;
- (id)getCacheLoraProfileModel;

@end
