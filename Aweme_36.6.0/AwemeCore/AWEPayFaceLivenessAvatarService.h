@interface AWEPayFaceLivenessAvatarService : NSObject

+ (id)sharedInstance;

- (id)p_errorWithDescription:(id)a0;
- (void)p_fetchAvatarResourceWithEffectID:(id)a0 completion:(id /* block */)a1;
- (void)p_downloadEffectWithModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchAvatarResourceWithEffectID:(id)a0 completion:(id /* block */)a1;

@end
