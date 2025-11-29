@class NSMutableArray;

@interface FinderLiveVisibilityState : WXPBGeneratedMessage

@property (nonatomic) BOOL showVisiblitySettingEntrance;
@property (nonatomic) BOOL showFreeOfChargeSettingEntrance;
@property (nonatomic) unsigned int visibilityModeOptionStatus;
@property (retain, nonatomic) NSMutableArray *visibilityFileIdList;
@property (retain, nonatomic) NSMutableArray *visibleChatroomIdList;
@property (retain, nonatomic) NSMutableArray *visibleUsernameList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFileIdList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeUsernameList;
@property (retain, nonatomic) NSMutableArray *visibilityFriendLabelList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFriendLabelList;
@property (nonatomic) unsigned int visibilityMode;
@property (nonatomic) unsigned int liveMode;

+ (void)initialize;

@end
