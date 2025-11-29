@class NSString, IESGCPPBMapPlayConfig, NSMutableArray;

@interface IESGCPPBCloudgamingBootConfigResponse_Data : GPBMessage

@property (nonatomic) BOOL notAllowed;
@property (copy, nonatomic) NSString *notAllowedReason;
@property (nonatomic) int useTimeS;
@property (nonatomic) int limitTimeS;
@property (retain, nonatomic) IESGCPPBMapPlayConfig *mapPlayConfig;
@property (nonatomic) BOOL hasMapPlayConfig;
@property (nonatomic) BOOL hasFullGame;
@property (copy, nonatomic) NSString *humeChannelId;
@property (copy, nonatomic) NSString *clickIdNature;
@property (copy, nonatomic) NSString *promoteGameId;
@property (copy, nonatomic) NSString *cgGameid;
@property (nonatomic) BOOL ifNewLaunch;
@property (nonatomic) int playTime;
@property (nonatomic) BOOL hitSidebarAbTest;
@property (retain, nonatomic) NSMutableArray *announcementPopupArray;
@property (readonly, nonatomic) unsigned long long announcementPopupArray_Count;

+ (id)descriptor;

@end
