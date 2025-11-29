@class NSString;

@interface AWEIMBulletQuoteReplyComponent : AWEIMFlexComponent <IESIMFeedMediaAvailable>

@property (nonatomic) BOOL hasObserveIESIMFeedMediaAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_addObserver;
- (void)p_didClickCover;
- (void)onAwemeAvailableStatusChange:(id)a0 conversationID:(id)a1 extraInfo:(id)a2 msg:(id)a3 itemID:(id)a4;
- (void)dealloc;

@end
