@class NSString;

@interface AWEFeedPlayBackgroundController : AWEAwemeFeedBaseController <AWEFeedPlayControlServiceListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shouldPreventPlayIfActive;
- (BOOL)shouldForbidResumePlayBackground;

@end
