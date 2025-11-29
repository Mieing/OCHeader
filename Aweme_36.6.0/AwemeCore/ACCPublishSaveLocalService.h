@class NSString;

@interface ACCPublishSaveLocalService : HTSService <ACCPublishSaveLocalService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)saveLocalWithDraftIDs:(id)a0 config:(id)a1 progressBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (id)saveLocalWithPublishModel:(id)a0 config:(id)a1 progressBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;

@end
