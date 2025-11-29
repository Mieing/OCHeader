@class NSString;

@interface AWEIMPublishAtFriendsViewModel : NSObject <AWEIMPublishAtFriendsViewModelInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (BOOL)shouldShowRecallMenuItemWithMessage:(id)a0;

- (id)supportMenuItemsWithMessage:(id)a0 shouldShowQuoteReplyMenuItem:(BOOL)a1 shouldShowRecallMenuItem:(BOOL)a2;

@end
