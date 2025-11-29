@class NSString;

@interface AWEUserProfileInfoServiceIMP : HTSService <AWEUserProfileInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getUserProfileFrequencyInfoWithCompletion:(id /* block */)a0;
+ (void)getUserProfileWithID:(id)a0 completion:(id /* block */)a1;
+ (void)getUserProfileWithID:(id)a0 detailCompletion:(id /* block */)a1;
+ (void)getUserProfileWithID:(id)a0 cacheStrategy:(unsigned long long)a1 cacheMaxAge:(double)a2 extraParams:(id)a3 detailCompletion:(id /* block */)a4;
+ (void)getUserProfileWithSecUid:(id)a0 completion:(id /* block */)a1;
+ (void)getUserProfileWithSecUid:(id)a0 detailCompletion:(id /* block */)a1;
+ (void)getUserProfileWithSecUid:(id)a0 cacheStrategy:(unsigned long long)a1 cacheMaxAge:(double)a2 extraParams:(id)a3 detailCompletion:(id /* block */)a4;
+ (void)getUserProfileWithID:(id)a0 secUid:(id)a1 cacheStrategy:(unsigned long long)a2 cacheMaxAge:(double)a3 extraParams:(id)a4 detailCompletion:(id /* block */)a5;
+ (void)getUserIDInfoWithUniqueID:(id)a0 completion:(id /* block */)a1;


@end
