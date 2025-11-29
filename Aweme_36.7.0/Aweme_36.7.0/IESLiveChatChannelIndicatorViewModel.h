@class NSString, NSMutableArray, IESLiveChatChannelIndicatorView;
@protocol IESLiveChatChannelIndicatorDelegate;

@interface IESLiveChatChannelIndicatorViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) IESLiveChatChannelIndicatorView *view;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<IESLiveChatChannelIndicatorDelegate> delegate;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) BOOL disableShowMemberCount;
@property (copy, nonatomic) NSString *currentUserId;

- (void)updateChannelInfo:(id)a0;
- (void)addChannelInfo:(id)a0;
- (void)removeChannelInfo:(id)a0;
- (void)selectedChannelWithChannelId:(long long)a0;
- (BOOL)setRedDotWithChannelId:(long long)a0;
- (id)transformToItem:(id)a0 currentUser:(id)a1;
- (id)avatarImage:(id)a0;
- (void)didSelectItemAtIndex:(long long)a0 onlyReloadData:(BOOL)a1;
- (BOOL)isSameUser:(id)a0 withUser:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;

@end
