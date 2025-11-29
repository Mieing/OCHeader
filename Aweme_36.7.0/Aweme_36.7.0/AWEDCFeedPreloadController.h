@class NSString;

@interface AWEDCFeedPreloadController : AWEDCFeedBaseController <AWEDCFeedPreloadControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadCoverImageWithAweme:(id)a0;

@end
