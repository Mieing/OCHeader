@class NSString;

@interface AWEDCRefreshUseUnconsumedVideosController : AWEDCFeedBaseController <AWEDCFeedRefreshUseUnconsumedVideosProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unconsumedVideos;
- (long long)getMaxReachedIndexWithIndexPath:(id)a0;

@end
