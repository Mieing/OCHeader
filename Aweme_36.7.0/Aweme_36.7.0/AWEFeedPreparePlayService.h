@class NSString;

@interface AWEFeedPreparePlayService : HTSService <AWEFeedPreparePlayService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)preparePlayerWithModel:(id)a0;
- (id)matchPreparedPlayerWithModel:(id)a0;
- (BOOL)preparePlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (BOOL)preparePlayerWithReferString:(id)a0 awemeModel:(id)a1 canUseCachedPlayer:(BOOL)a2;
- (void)stopPrepareIfNeedWithReferString:(id)a0;
- (id)matchInitialPreparedPlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (BOOL)preparePlayerWithOutPrerenderWithReferString:(id)a0 awemeModel:(id)a1 canUseCachedPlayer:(BOOL)a2;
- (void)prerenderPlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (id)matchPreparedPlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (void)removePreparedPlayerWithReferString:(id)a0;

@end
