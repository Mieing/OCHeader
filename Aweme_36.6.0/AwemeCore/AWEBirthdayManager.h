@interface AWEBirthdayManager : NSObject

+ (id)changeEffect:(id)a0 effectId:(long long)a1 editPreview:(id)a2;
+ (id)fetchEffect:(long long)a0;
+ (id)setMV:(id)a0 publishViewModel:(id)a1;
+ (id)p_downloadThenEditEffect:(id)a0 forUser:(id)a1 effect:(id)a2 effectID:(long long)a3;
+ (id)transformToAccUser:(id)a0;
+ (id)transformToAccTemplate:(id)a0;
+ (id)fetchImageForUser:(id)a0;
+ (void)copyMusic:(id)a0;
+ (id)downloadThenEditEffect:(id)a0 enterFrom:(id)a1;
+ (id)downloadThenEditIMBirthdayEffect:(id)a0 currentEffect:(id)a1 forUser:(id)a2 imModel:(id)a3;

@end
