@class NSString;

@interface AWELiveMessageListScrollStatus : NSObject <HTSLiveMessageListScrollActions>

@property (nonatomic) BOOL messageListScrolling;
@property (nonatomic) BOOL slideEnableScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageListViewWillBeginDragging:(id)a0;
- (void)messageListViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)messageListViewDidEndDecelerating:(id)a0;
- (void)messageListViewReachBottom;
- (void)messageListStateReset;
- (void)receiveTouch;
- (id)init;

@end
