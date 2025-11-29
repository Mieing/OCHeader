@class NSString, NSMutableArray;

@interface IESLiveInnerFeedPostUnreadService : NSObject <IESLiveInnerFeedPostUnreadService>

@property (retain, nonatomic) NSMutableArray *unreadItems;
@property (retain, nonatomic) NSMutableArray *cancelUnreadItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postUnreadItems:(id)a0;
- (void)postUnreadRoomItems:(id)a0 channel:(long long)a1;
- (void)postUnreadUserFeedbackCardInTotalItems:(id)a0;
- (void)postCancelPullRefreshItems:(id)a0;
- (void)p_postUnreadRoomIds:(id)a0;
- (void)p_posuUnreadUserFeedbackCardIds:(id)a0;
- (void).cxx_destruct;

@end
