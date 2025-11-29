@class NSString, AWEStorage;

@interface AWELOTImageCache : NSObject <LOTImageCache>

@property (retain, nonatomic) AWEStorage *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)imageForKey:(id)a0;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
