@class NSString, AWEPlayInteractionContext;

@interface AWEPlayInteractionIMFeedQuickReplyDataController : NSObject <AWEPlayInteractionIMFeedQuickReplyDataControllerProtocol>

@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getOneFriendRecommendQuickReplySmartEmojis:(long long)a0;
- (id)getSmartEmojisOfCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)defaultEmojis;

@end
