@class NSString;

@interface AWESearchDynamicImageInfo : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *lightUrl;
@property (readonly, copy, nonatomic) NSString *lightMd5;
@property (readonly, copy, nonatomic) NSString *darkUrl;
@property (readonly, copy, nonatomic) NSString *darkMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)containsImageCacheForTheme:(long long)a0;
- (id)getImageCacheForKeyForTheme:(long long)a0;
- (void)loadImageCacheForKeyForTheme:(long long)a0;
- (void)getImageForTheme:(long long)a0 completion:(id /* block */)a1;
- (void)loadImageCacheForKeyForTheme:(long long)a0 validationPassedCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)imageCache;

@end
