@class UrlStructV2, NSString, ShareStructV2, HotTrendsLabelStructV2, CollectTrendsV2, NSMutableArray;

@interface TrendsInfoV2 : GPBMessage

@property (nonatomic) long long id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) long long useCount;
@property (nonatomic) BOOL hasUseCount;
@property (nonatomic) int displayLocation;
@property (nonatomic) BOOL hasDisplayLocation;
@property (retain, nonatomic) NSMutableArray *trendsMaterialsArray;
@property (readonly, nonatomic) unsigned long long trendsMaterialsArray_Count;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL hasButtonText;
@property (copy, nonatomic) NSString *buttonAction;
@property (nonatomic) BOOL hasButtonAction;
@property (retain, nonatomic) NSMutableArray *insertMusicIdsArray;
@property (readonly, nonatomic) unsigned long long insertMusicIdsArray_Count;
@property (nonatomic) int collectStatus;
@property (nonatomic) BOOL hasCollectStatus;
@property (retain, nonatomic) NSMutableArray *trendsMusicInfoArray;
@property (readonly, nonatomic) unsigned long long trendsMusicInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *trendsUnifiedMusicGroupArray;
@property (readonly, nonatomic) unsigned long long trendsUnifiedMusicGroupArray_Count;
@property (retain, nonatomic) UrlStructV2 *topIcon;
@property (nonatomic) BOOL hasTopIcon;
@property (nonatomic) long long ugId;
@property (nonatomic) BOOL hasUgId;
@property (nonatomic) long long musicId;
@property (nonatomic) BOOL hasMusicId;
@property (copy, nonatomic) NSString *flashMobId;
@property (nonatomic) BOOL hasFlashMobId;
@property (copy, nonatomic) NSString *originalMaterials;
@property (nonatomic) BOOL hasOriginalMaterials;
@property (copy, nonatomic) NSString *flashMobTitle;
@property (nonatomic) BOOL hasFlashMobTitle;
@property (copy, nonatomic) NSString *trendsDescribe;
@property (nonatomic) BOOL hasTrendsDescribe;
@property (retain, nonatomic) ShareStructV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (copy, nonatomic) NSString *trendsLabel;
@property (nonatomic) BOOL hasTrendsLabel;
@property (retain, nonatomic) HotTrendsLabelStructV2 *hotLabel;
@property (nonatomic) BOOL hasHotLabel;
@property (nonatomic) BOOL musicBanClick;
@property (nonatomic) BOOL hasMusicBanClick;
@property (nonatomic) BOOL materialBanClick;
@property (nonatomic) BOOL hasMaterialBanClick;
@property (nonatomic) long long majorUgId;
@property (nonatomic) BOOL hasMajorUgId;
@property (nonatomic) long long minorUgId;
@property (nonatomic) BOOL hasMinorUgId;
@property (copy, nonatomic) NSString *trackPassThrough;
@property (nonatomic) BOOL hasTrackPassThrough;
@property (retain, nonatomic) CollectTrendsV2 *collectTrends;
@property (nonatomic) BOOL hasCollectTrends;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) BOOL hasGameName;
@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) BOOL hasGameId;
@property (nonatomic) BOOL showMusicCaption;
@property (nonatomic) BOOL hasShowMusicCaption;

+ (id)descriptor;

@end
