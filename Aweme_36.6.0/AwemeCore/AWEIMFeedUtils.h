@class NSString;

@interface AWEIMFeedUtils : NSObject <IESIMFeedUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (BOOL)isFeedMessage:(id)a0;
- (BOOL)isFeedMessageType:(long long)a0;
- (BOOL)isQuotedBulletMessage:(id)a0;
- (BOOL)isBulletFeedMessageCanQuoteReply:(id)a0;
- (BOOL)isUnreadFeedMessage:(id)a0;
- (BOOL)isFeedBulletMessageType:(id)a0;
- (BOOL)isUnreadFeedBulletMessage:(id)a0;
- (void)saveIMMessageUnreadStateWithBulletMessage:(id)a0;
- (void)cleanTrackerWhenLeaveScene;
- (id)feedVideoUnavailableBubbleModel:(id)a0;

@end
