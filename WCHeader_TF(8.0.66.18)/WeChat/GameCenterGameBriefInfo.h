@class NSString, NSArray, GameCenterLatestGameInfo, GameCenterLabelInfo;

@interface GameCenterGameBriefInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) NSString *brief;
@property (nonatomic) long long trend;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *downloadURL;
@property (nonatomic) unsigned int tag;
@property (nonatomic) unsigned long long showType;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) GameCenterLatestGameInfo *latestGameInfo;
@property (retain, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSString *noticeID;
@property (retain, nonatomic) NSArray *promotedFeeds;
@property (retain, nonatomic) NSString *titleForNewLabel;
@property (retain, nonatomic) NSString *tagForNewApp;
@property (nonatomic) BOOL hasEnableChatRoom;
@property (retain, nonatomic) GameCenterLabelInfo *labelInfo;
@property (retain, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) NSString *externInfo;
@property (nonatomic) int appType;
@property (retain, nonatomic) NSString *h5GameAppid;
@property (retain, nonatomic) NSString *h5GameLaunchUrl;
@property (retain, nonatomic) NSString *h5GameDetailUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_brief;
+ (void)PBArrayAdd_trend;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_downloadURL;
+ (void)PBArrayAdd_tag;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_imageURL;
+ (void)PBArrayAdd_latestGameInfo;
+ (void)PBArrayAdd_webURL;
+ (void)PBArrayAdd_noticeID;
+ (void)PBArrayAdd_promotedFeeds;
+ (void)PBArrayAdd_titleForNewLabel;
+ (void)PBArrayAdd_tagForNewApp;
+ (void)PBArrayAdd_hasEnableChatRoom;
+ (void)PBArrayAdd_labelInfo;
+ (void)PBArrayAdd_recommendDesc;
+ (void)PBArrayAdd_externInfo;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_h5GameAppid;
+ (void)PBArrayAdd_h5GameLaunchUrl;
+ (void)PBArrayAdd_h5GameDetailUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)parseFromBriefInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)canSubscribe;
- (BOOL)isWithNew;
- (void)parseFromAppItem:(id)a0;
- (void)parseFromResp:(id)a0;
- (void).cxx_destruct;

@end
