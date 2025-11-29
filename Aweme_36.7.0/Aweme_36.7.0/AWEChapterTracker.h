@class AWEChapterContext;

@interface AWEChapterTracker : NSObject

@property (weak, nonatomic) AWEChapterContext *pageContext;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (id)commonParams;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)trackChapterProgressClick:(BOOL)a0;
- (void)trackChapterProgressShow:(BOOL)a0;
- (void)trackCommentButtonClick:(id)a0;
- (void)trackDataForEnterPrivateChatWithPeerUserID:(id)a0;
- (void)trackDataForEnterGroupChatWithCID:(id)a0;
- (void)trackEnterUserProfileWithEnterMethod:(id)a0;
- (void).cxx_destruct;

@end
