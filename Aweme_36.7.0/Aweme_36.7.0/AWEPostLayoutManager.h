@class NSString;

@interface AWEPostLayoutManager : NSObject <AWEPostLayoutManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWaterfallSwitch;
+ (BOOL)userHomePageUseWaterfall;
+ (long long)getLayoutStyle;
+ (void)updateLayoutStyle:(long long)a0 completion:(id /* block */)a1;
+ (id)postLayoutCacheKey;
+ (void)trackLayoutChangeRequest:(id)a0 error:(id)a1;
+ (id)storageKeyForCurrentUser:(id)a0;
+ (void)setLayoutStyle:(long long)a0;


@end
