@class AFDCloseFriendsMomentContext, NSString, NSObject;
@protocol AFDCloseFriendsSettingsPanelStrategyProtocol;

@interface AFDCloseFriendsSettingsPanelListSectionViewModel : AWEBaseListSectionViewModel <AFDCloseFriendsSettingsPanelCellViewDelegate>

@property (retain, nonatomic) AFDCloseFriendsMomentContext *context;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *containerPreviousPage;
@property (retain, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyProtocol> *currentStrategy;
@property (retain, nonatomic) NSString *sectionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapCloseFriendsButtonOnCell:(id)a0;
- (void)didTapUnCloseFriendsButtonOnCell:(id)a0;
- (void)track_closeFriendsWithStatus:(long long)a0 userID:(id)a1 action:(id)a2;
- (void).cxx_destruct;
- (double)cellHeight;

@end
