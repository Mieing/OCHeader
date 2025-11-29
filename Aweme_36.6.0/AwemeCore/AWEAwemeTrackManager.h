@class NSString, NSDictionary, AWEAwemeModel, NSMutableSet;

@interface AWEAwemeTrackManager : NSObject <AWEAwemeTrackManagerProtocol>

@property (copy, nonatomic) NSDictionary *awemeParams;
@property (copy, nonatomic) NSDictionary *awemeLogPb;
@property (copy, nonatomic) NSString *lastHomePagePlayingAwemeID;
@property (copy, nonatomic) NSString *reviseLastHomePagePlayingAwemeID;
@property (copy, nonatomic) NSString *reviseBackLastHomePagePlayingAwemeID;
@property (retain, nonatomic) AWEAwemeModel *lastHomePagePlayingAweme;
@property (copy, nonatomic) NSString *lastFullScreenPlayingAwemeID;
@property (nonatomic) BOOL isLastFullScreenPlayingAwemeMeteorMode;
@property (nonatomic) BOOL isLastPlayingAwemeClickReuseMeteorMode;
@property (copy, nonatomic) NSString *lastPageFullScreenPlayingBelong;
@property (copy, nonatomic) NSString *lastFullScreenPlayingOriginalAwemeID;
@property (nonatomic) long long lastFullScreenPlayingOriginalDistance;
@property (copy, nonatomic) NSDictionary *awemeRepostParams;
@property (copy, nonatomic) NSDictionary *playParamsForShoot;
@property (copy, nonatomic) NSString *lastTemplateId;
@property (copy, nonatomic) NSString *stickers;
@property (retain, nonatomic) NSMutableSet *viewAwemeIds;
@property (copy, nonatomic) NSString *homePageTabName;
@property (nonatomic) BOOL isClickMixPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needAddUserRelationWhenTracking;
+ (id)currentAwemeLogPb;
+ (id)lastHomePagePlayingAwemeID;
+ (id)reviseLastHomePagePlayingAwemeID;
+ (id)reviseBackLastHomePagePlayingAwemeID;
+ (id)lastHomePagePlayingAweme;
+ (id)lastFullScreenPlayingAwemeID;
+ (BOOL)isLastFullScreenPlayingAwemeMeteorMode;
+ (BOOL)isLastPlayingAwemeClickReuseMeteorMode;
+ (id)lastPageFullScreenPlayingBelong;
+ (id)lastFullScreenPlayingOriginalAwemeID;
+ (long long)lastFullScreenPlayingOriginalDistance;
+ (id)lastTemplateId;
+ (void)setLastTemplateId:(id)a0;
+ (void)setHomePageTabName:(id)a0;
+ (void)appendHotSearchTrendingTopicToParamsIfNeeded:(id)a0 awemeModel:(id)a1;
+ (id)currentAwemeTrackParams;
+ (id)homePageTabName;
+ (void)trackCurrentAweme:(id)a0;
+ (id)currentRepostParams;
+ (id)currentPlayParamsForShoot;
+ (void)appendHotSearchTrendingTopicToParamsIfNeeded:(id)a0 awemeModel:(id)a1 referString:(id)a2;
+ (void)trackLastHomePagePlayingAwemeID:(id)a0;
+ (void)trackReviseLastHomePagePlayingAwemeID:(id)a0;
+ (void)trackReviseBackLastHomePagePlayingAwemeID:(id)a0;
+ (void)trackLastHomePagePlayingAweme:(id)a0;
+ (void)trackLastFullScreenPlayingAwemeID:(id)a0;
+ (void)trackIsLastFullScreenPlayingAwemeMeteorMode:(BOOL)a0;
+ (void)trackIsLastPlayingAwemeClickReuseMeteorMode:(BOOL)a0;
+ (void)trackLastPageFullScreenPlayingBelong:(id)a0;
+ (void)trackLastFullScreenPlayingOriginalAwemeID:(id)a0;
+ (void)trackLastFullScreenPlayingOriginalDistance:(long long)a0;
+ (long long)viewAwemeCount;
+ (void)trackPlayAwemeForShoot:(id)a0;
+ (id)sharedInstance;
+ (id)stickers;

- (void).cxx_destruct;

@end
