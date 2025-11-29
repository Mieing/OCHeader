@class IESGCPExplainCardMiniPlayMeta, NSString, IESGCPExplainCardMiniGameMeta, IESGCPExplainCardTag, IESGCPExplainCardFeaturedContent, IESGCPExplainCardAtmosphereContent, IESGCPExplainCardImageBundler, NSMutableArray, IESGCPExplainCardReserveItem, IESGCPExplainCardDisplayInfo;

@interface IESGCPExplainCardMessage : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *gameImage;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSMutableArray *gameTagNamesArray;
@property (copy, nonatomic) NSString *gameBackgroundColor;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *iosAppId;
@property (copy, nonatomic) NSString *activeLink;
@property (copy, nonatomic) NSString *iosSalePoint;
@property (nonatomic) BOOL isForbidJumpIosApp;
@property (nonatomic) BOOL hasPlatformGift;
@property (copy, nonatomic) NSString *openGameURL;
@property (nonatomic) int introduceTimeLimit;
@property (nonatomic) long long introduceStartTime;
@property (nonatomic) BOOL isShowAnimate;
@property (nonatomic) long long animateStartTime;
@property (nonatomic) long long animateDuration;
@property (nonatomic) long long downloadCount;
@property (copy, nonatomic) NSString *propIcon;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *propId;
@property (nonatomic) long long marketPrice;
@property (nonatomic) long long sellingPrice;
@property (nonatomic) long long propType;
@property (nonatomic) long long gameAccessType;
@property (nonatomic) long long supportPlatforms;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (retain, nonatomic) IESGCPExplainCardReserveItem *reserveItem;
@property (retain, nonatomic) IESGCPExplainCardMiniGameMeta *miniGameMeta;
@property (retain, nonatomic) IESGCPExplainCardMiniPlayMeta *miniPlayMeta;
@property (retain, nonatomic) IESGCPExplainCardImageBundler *gameIcon;
@property (retain, nonatomic) IESGCPExplainCardAtmosphereContent *atmosphereContent;
@property (retain, nonatomic) IESGCPExplainCardFeaturedContent *featuredContent;
@property (retain, nonatomic) IESGCPExplainCardTag *tag;
@property (retain, nonatomic) IESGCPExplainCardDisplayInfo *timerDisplayInfo;
@property (nonatomic) BOOL isInPreDownloadPeriod;

- (void).cxx_destruct;

@end
