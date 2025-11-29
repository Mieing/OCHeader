@class NSCache, NSString;

@interface AWEMVChannelDataRequestCache : NSObject <AWEBasicModeMessage, AWEUserMessage, AWEDigitalWellbeingMessage>

@property (class, readonly, nonatomic) AWEMVChannelDataRequestCache *shared;

@property (retain, nonatomic) NSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheKeyForQueryParams:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (id)getItemForKey:(id)a0 autoRemove:(BOOL)a1;
- (void)removeAllRequest;
- (void).cxx_destruct;
- (id)init;
- (void)setItem:(id)a0 forKey:(id)a1;

@end
