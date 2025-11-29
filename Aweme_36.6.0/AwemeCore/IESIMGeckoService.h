@class NSString;

@interface IESIMGeckoService : HTSService <IESIMGeckoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aweIMCachedGeckoManager;

- (BOOL)hasCacheForPath:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)geckoManager;
- (void)fetchResourcesWhenFirstEnterIM;
- (id)resoutceDirectoryForChannel:(id)a0;
- (id)dataForPath:(id)a0 channel:(id)a1;
- (void)imageView:(id)a0 setImageWithName:(id)a1;
- (void)button:(id)a0 setImageWithName:(id)a1 forState:(unsigned long long)a2;
- (void)button:(id)a0 setBackgroundImageNamed:(id)a1 forState:(unsigned long long)a2;
- (id)accessKey;

@end
