@class UIColor, NSString, NSNumber;

@interface AWEIMChatListCellFeatureSwitchImpl : NSObject <AWEIMChatCellFeatureSwitchProtocol> {
    NSNumber *_enableShootAtChatList_Object;
    NSNumber *_enablePlayAtChatList_Object;
    NSNumber *_revertResetMessageTabChatCellOnlineHintWhenFollowStatusChanges_Object;
    NSNumber *_revertFixOnClearingStoredColorOnThemeDidChanged_Object;
    NSNumber *_enablePublishAwemeMentionPokeLightInteraction_Object;
    NSNumber *_enableIMShowLiveStatus_Object;
    NSNumber *_fixOnLineDotRefresh_Object;
    NSNumber *_enableIMLiveAvatorEnterLiveRoom_Object;
    NSNumber *_showYellowBlueV_object;
}

@property (retain, nonatomic) UIColor *cellBGColor;
@property (retain, nonatomic) UIColor *cellDarkStickOnTopBGColor;
@property (nonatomic) BOOL showYellowBlueV;
@property (nonatomic) BOOL enableShootAtChatList;
@property (nonatomic) BOOL enablePlayAtChatList;
@property (nonatomic) BOOL revertResetMessageTabChatCellOnlineHintWhenFollowStatusChanges;
@property (readonly, nonatomic) BOOL fixOnLineDotRefresh;
@property (readonly, nonatomic) BOOL enablePokeLightInteraction;
@property (readonly, nonatomic) BOOL enablePublishAwemeMentionPokeLightInteraction;
@property (nonatomic) unsigned long long im_consecutive_chat_days;
@property (nonatomic) BOOL enableIMShowLiveStatus;
@property (nonatomic) BOOL enableIMLiveAvatorEnterLiveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (BOOL)revertFixOnClearingStoredColorOnThemeDidChanged;
- (void)onThemeDidChanged;
- (void)clearStoredColor;
- (void).cxx_destruct;
- (id)init;

@end
