@class HTSLiveLabelInfo, HTSLiveRoomFeedData_StreamCutPosition, HTSLiveRoomFeedData_FollowTopAppearance, HTSLiveRoomFeedData_DrawerConfig, NSString;

@interface HTSLiveRoomFeedData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLabelInfo *relationLabel;
@property (nonatomic) BOOL hasRelationLabel;
@property (retain, nonatomic) HTSLiveRoomFeedData_FollowTopAppearance *followTopAppearance;
@property (nonatomic) BOOL hasFollowTopAppearance;
@property (retain, nonatomic) HTSLiveRoomFeedData_StreamCutPosition *cutPosition;
@property (nonatomic) BOOL hasCutPosition;
@property (retain, nonatomic) HTSLiveRoomFeedData_DrawerConfig *drawerConfig;
@property (nonatomic) BOOL hasDrawerConfig;
@property (nonatomic) BOOL canShowInnerCard;
@property (nonatomic) long long shareCount;
@property (copy, nonatomic) NSString *moduleTitle;
@property (nonatomic) BOOL isSuperior;

+ (id)descriptor;

@end
