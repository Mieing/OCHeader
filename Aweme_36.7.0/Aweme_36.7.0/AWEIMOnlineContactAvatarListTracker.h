@class NSString, NSMutableDictionary, UIView, NSMutableArray;

@interface AWEIMOnlineContactAvatarListTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackDataDict;
@property (retain, nonatomic) NSMutableArray *closeFriendsNoReadArray;
@property (retain, nonatomic) NSMutableDictionary *bizDidShowWhenViewAppearDict;
@property (nonatomic) BOOL isDrag;
@property (copy, nonatomic) NSString *requestID;
@property (weak, nonatomic) UIView *avatarView;
@property (nonatomic) BOOL isShowingRemindBubble;

+ (id)trackTypeWithViewModel:(id)a0;
+ (id)trackAweTypeWithViewModel:(id)a0;
+ (BOOL)enableSkyTrackOpt;
+ (id)trackLongPressTypeWithViewModel:(id)a0;

- (long long)getShowStatusWithInfoModel:(id)a0;
- (void)p_trackEnterPrivateChatWithModel:(id)a0 extraParams:(id)a1;
- (long long)getAnnualMemoryTypeWithModel:(id)a0;
- (void)p_trackGeneralPostClick:(id)a0;
- (BOOL)didShowWhenViewAppearDictWithModel:(id)a0;
- (void)resetDidShowWhenViewAppearDict;
- (void)trackSkylightCellClickWithModel:(id)a0 cellIndex:(long long)a1 clickType:(id)a2;
- (void)trackBizCellShowWithModel:(id)a0 cellIndex:(long long)a1;
- (void)trackCellShowWithFriendViewModel:(id)a0 cellIndex:(long long)a1;
- (void)resetCloseFriends;
- (id)getOnlineDotTrackParamWithInfoModel:(id)a0;
- (BOOL)isEnterFromFriendTab;
- (void)didDragScrollView;
- (void).cxx_destruct;
- (void)reset;

@end
