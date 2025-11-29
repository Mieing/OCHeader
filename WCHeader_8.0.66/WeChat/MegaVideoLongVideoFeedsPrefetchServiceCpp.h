@class NSString;

@interface MegaVideoLongVideoFeedsPrefetchServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoLongVideoFeedsPrefetchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstance;

- (void)checkPrefetchFeeds:(id)a0;
- (void)checkPrefetchFeedsWithCallback:(id)a0 onCompleted:(id /* block */)a1;
- (id)getPrefetchResult:(BOOL)a0;
- (void)clearCurrentPrefetchResult;
- (BOOL)isPrefetching;
- (void)getPrefetchResultAsync:(BOOL)a0 onCompleted:(id /* block */)a1;

@end
