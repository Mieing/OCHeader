@class NSString;

@interface AWEPublishAnchorCacheService : NSObject <ACCPublishAnchorCacheService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAnchorInfoWithID:(id)a0 title:(id)a1;
- (id)anchorInfoList;
- (void)updatePublishAnchorInfoWithAnchorID:(id)a0 title:(id)a1;
- (BOOL)isSupportUpdateAnchorInfoWithAnchorType:(long long)a0;
- (id)getAnchorInfoWithID:(id)a0;
- (void)sendNotifyWithID:(id)a0 title:(id)a1;
- (void)fetchEffectAndUpdateAnchorInfoWithID:(id)a0 isSendNotify:(BOOL)a1;
- (void)fetchTemplateAndUpdateAnchorInfoWithID:(id)a0 templateSource:(long long)a1 isSendNotify:(BOOL)a2;
- (id)init;

@end
