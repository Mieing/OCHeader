@class NSString;

@interface AWEPublishReeditService : HTSService <AWEPublishReeditService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweme:(id)a0 didPublishWithTaskId:(id)a1;
- (BOOL)isAwemeReeditable:(id)a0;
- (BOOL)isAwemeExist:(id)a0;
- (id)draftIdWithAwemeId:(id)a0;
- (void)startReeditAweme:(id)a0;
- (void)delayDeleteingDraft:(id)a0;
- (BOOL)isAwemeExpiredWithId:(id)a0;
- (id)storageKeyOf:(id)a0;
- (BOOL)isSegment:(id)a0;
- (void)removeExpiredData;

@end
