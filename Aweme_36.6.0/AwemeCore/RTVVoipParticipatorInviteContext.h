@class NSString, NSArray, NSNumber;

@interface RTVVoipParticipatorInviteContext : NSObject

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) long long voipType;
@property (readonly, copy, nonatomic) NSArray *defaultSelectedUserIDs;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) BOOL enableCloseButton;
@property (readonly, nonatomic) BOOL disablePullIndicator;
@property (readonly, nonatomic) NSNumber *panelHeightScale;
@property (readonly, nonatomic) BOOL enableCreateGroupAndInvite;
@property (readonly, nonatomic) BOOL autoSelect;
@property (readonly, copy, nonatomic) NSArray *preferSelectedUserIDs;
@property (readonly, copy, nonatomic) NSArray *onTheCallUserIDs;
@property (readonly, nonatomic) BOOL supportShowVoipStatus;
@property (readonly, nonatomic) BOOL isCoSeeScene;
@property (readonly, nonatomic) NSNumber *maxSelectableCount;
@property (readonly, copy, nonatomic) NSArray *plugins;
@property (readonly, nonatomic) BOOL disableSearch;
@property (readonly, nonatomic) BOOL supportGroup;
@property (readonly, nonatomic) NSNumber *topInset;
@property (readonly, nonatomic) BOOL disableEmptyImageView;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *eventPage;
@property (copy, nonatomic) NSString *chatType;

- (id)initWithRoomID:(id)a0 defaultSelectedUserIDs:(id)a1 voipType:(long long)a2;
- (void)updateTopInset:(id)a0;
- (void)updateDisableEmptyImageView:(BOOL)a0;
- (void)updateAutoSelect:(BOOL)a0;
- (void)updateMaxSelectableCount:(id)a0;
- (id)initWithConversationID:(id)a0 defaultSelectedUserIDs:(id)a1 voipType:(long long)a2;
- (void)updateOnTheCallUserIDs:(id)a0;
- (void)updateIsCoSeeScene:(BOOL)a0;
- (void)updateSupportShowVoipStatus:(BOOL)a0;
- (void)updateCustomTitle:(id)a0;
- (void)updatePreferSelectedUserIDs:(id)a0;
- (void)updatePlugins:(id)a0;
- (void)updateDisableSearch:(BOOL)a0;
- (void)updateSupportGroup:(BOOL)a0;
- (void)updateEnableCreateGroupAndInvite:(BOOL)a0;
- (void)updateWithCreateGroupAndInviteStyle;
- (void).cxx_destruct;

@end
