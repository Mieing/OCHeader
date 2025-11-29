@class NSString;

@interface AWEFeedSyncDoubleColumnDislikeController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDoubleColumnSyncDislikeNotification:(id)a0;
- (void)viewDidLoad;

@end
