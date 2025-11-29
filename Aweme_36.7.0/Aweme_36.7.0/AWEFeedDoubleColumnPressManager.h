@class NSString;

@interface AWEFeedDoubleColumnPressManager : NSObject <AWEFeedDoubleColumnPressPinchManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadPlaceholderDCFeedCacheOnlyOnce;
- (void)preloadContinuePlayImage;
- (void)preloadPlaceholderDCFeedCacheIfNeeded;
- (id)fetchHistoryCacheModelArray;
- (id)fetchFeedCurrentAweme;
- (void)dcFeedPressTimingAction;
- (void)dcFeedPinchTimingAction;

@end
