@class IESGCPPBRankListAdditionalModel, IESGCPPBGameImageBundler, NSDictionary, IESGCPPBGameDetailScaffoldInfo, IESGCPAudienceDetailTabControlMsg, IESGCPAudienceDetailViewControllerRouterModel, IESGCPHeaderTheme, IESGCPDetailContentNode, NSString, IESGCPDetailThemeConfig, NSArray, IESGCPPBVideoRankListEntrance, NSNumber, IESGCPPBGameDetailCommonParams;

@interface IESGCPDetailData : NSObject

@property (readonly, nonatomic) IESGCPHeaderTheme *headerTheme;
@property (readonly, nonatomic) IESGCPHeaderTheme *halfScreenHeaderTheme;
@property (readonly, nonatomic) IESGCPDetailThemeConfig *themeConfig;
@property (retain, nonatomic) IESGCPPBGameDetailScaffoldInfo *scaffoldInfo;
@property (retain, nonatomic) IESGCPDetailContentNode *convertAreaNode;
@property (retain, nonatomic) IESGCPDetailContentNode *downloadButtonNode;
@property (retain, nonatomic) IESGCPAudienceDetailViewControllerRouterModel *routerModel;
@property (retain, nonatomic) IESGCPDetailContentNode *content;
@property (retain, nonatomic) IESGCPPBGameDetailCommonParams *gameDetailCommonParams;
@property (copy, nonatomic) NSDictionary *gameDetailCommonParamsDict;
@property (copy, nonatomic) NSDictionary *reportParams;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *promoterID;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSNumber *roomNumberID;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long isRsvp;
@property (nonatomic) BOOL isFromCache;
@property (copy, nonatomic) NSString *trackId;
@property (retain, nonatomic) NSDictionary *monitorParams;
@property (retain, nonatomic) IESGCPAudienceDetailTabControlMsg *tabsControlMsg;
@property (readonly, copy, nonatomic) NSDictionary *exposeParam;
@property (readonly, copy, nonatomic) NSArray *tagsArray;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *activeLink;
@property (readonly, copy, nonatomic) NSString *openGameURL;
@property (readonly, copy, nonatomic) NSString *iosAppId;
@property (readonly, copy, nonatomic) NSString *company;
@property (readonly, copy, nonatomic) NSString *onlineTime;
@property (readonly, copy, nonatomic) NSString *introduction;
@property (readonly, nonatomic) long long gameStage;
@property (readonly, nonatomic) long long gameUnionType;
@property (readonly, nonatomic) BOOL isForbidJumpIosApp;
@property (readonly, nonatomic) BOOL hasGroupTask;
@property (readonly, nonatomic) BOOL canOpenAppStore;
@property (readonly, copy, nonatomic) NSString *shortAdditionalDesc;
@property (readonly, copy, nonatomic) NSArray *additionalDescArray;
@property (readonly, copy, nonatomic) NSArray *newAdditionalDescList;
@property (readonly, nonatomic) IESGCPPBVideoRankListEntrance *videoRankListEntrance;
@property (readonly, nonatomic) IESGCPPBRankListAdditionalModel *gameRankListEntrance;
@property (readonly, copy, nonatomic) NSString *gamePlatformString;
@property (readonly, copy, nonatomic) NSString *unsupportedDownloadToast;
@property (readonly, copy, nonatomic) NSString *unifiedGameID;
@property (readonly, nonatomic) BOOL isBigMiniGame;
@property (readonly, nonatomic) BOOL isHeliumGame;
@property (readonly, nonatomic) BOOL isInteractGame;
@property (readonly, copy, nonatomic) NSString *mapId;
@property (readonly, copy, nonatomic) NSString *mapName;

- (BOOL)isV3StructureConfig;
- (void).cxx_destruct;

@end
