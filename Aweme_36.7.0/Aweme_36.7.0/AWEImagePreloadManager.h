@class NSString;

@interface AWEImagePreloadManager : NSObject <AWEImagePreloadManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preloadCoverImageWithModel:(id)a0 useNormalCover:(BOOL)a1 bizTag:(id)a2;
- (void)preloadCoverImageWithModel:(id)a0 useNormalCover:(BOOL)a1;

@end
