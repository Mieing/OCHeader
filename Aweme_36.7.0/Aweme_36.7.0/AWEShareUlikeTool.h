@class NSString;

@interface AWEShareUlikeTool : HTSService <ACCUserServiceMessage, AWEShareUlikeTool>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackClickPublishToUlike:(id)a0 enterFrom:(id)a1;
+ (void)trackClickToUlike:(id)a0 enterFrom:(id)a1;
+ (BOOL)supportSyncUlike;

- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)supportSyncAwemeToUlike:(id)a0 user:(id)a1;
- (void)fetchUlikeAuthAccount;
- (id)init;
- (void)dealloc;

@end
