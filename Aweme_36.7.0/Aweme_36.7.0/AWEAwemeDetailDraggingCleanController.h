@class NSString;

@interface AWEAwemeDetailDraggingCleanController : AWEAwemeNewDetailBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cleanScreenConfig;
+ (BOOL)enableDraggingCleanScreen;

- (void)draggingCleanScreen:(BOOL)a0 feedCell:(id)a1 forceNoAnimation:(BOOL)a2;
- (double)cleanAnimationDuration;
- (double)recoveryAnimationDuration;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
