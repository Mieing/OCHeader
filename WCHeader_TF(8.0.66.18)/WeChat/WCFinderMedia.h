@class WCFinderParseContentModel, NSString, WCFinderMediaInfo, NSArray, FinderTopic, WCFinderObjectBGMInfo, FinderVideoTemplateInfo, NSMutableArray, FinderExtendedReading, FinderLocation, FinderFromAppInfo;

@interface WCFinderMedia : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) double feedLatitude;
@property (nonatomic) double feedLongitude;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *mediaArray;
@property (retain, nonatomic) NSArray *selectedAssetIDs;
@property (nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) WCFinderMediaInfo *currentMedia;
@property (retain, nonatomic) FinderLocation *location;
@property (retain, nonatomic) FinderExtendedReading *extReading;
@property (retain, nonatomic) FinderTopic *topic;
@property (retain, nonatomic) NSString *contentHighlightString;
@property (retain, nonatomic) WCFinderParseContentModel *parseContentModel;
@property (retain, nonatomic) NSMutableArray *mentionContactArray;
@property (retain, nonatomic) NSMutableArray *mentionNicknameArray;
@property (retain, nonatomic) WCFinderObjectBGMInfo *finderObjectBGMInfo;
@property (retain, nonatomic) FinderFromAppInfo *fromAppInfo;
@property (retain, nonatomic) FinderVideoTemplateInfo *videoTemplateInfo;
@property (retain, nonatomic) NSString *flowCardDesc;
@property (nonatomic) BOOL isLowBitRateMedia;
@property (nonatomic) BOOL feedIsRisky;
@property (retain, nonatomic) NSMutableArray *shortTitleArray;
@property (nonatomic) BOOL hasUploadCDNSuc;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } feedLocation;
@property (retain, nonatomic) NSString *highLightDescription;
@property (copy, nonatomic) NSString *liveDescriptionExtend;
@property (nonatomic) unsigned long long LbsFlagType;
@property (nonatomic) unsigned long long subLbsFlagType;
@property (copy, nonatomic) NSString *postShortTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_contentHighlightString;
+ (void)PBArrayAdd_parseContentModel;
+ (void)PBArrayAdd_mentionContactArray;
+ (void)PBArrayAdd_mentionNicknameArray;
+ (void)PBArrayAdd_finderObjectBGMInfo;
+ (void)PBArrayAdd_fromAppInfo;
+ (void)PBArrayAdd_videoTemplateInfo;
+ (void)PBArrayAdd_flowCardDesc;
+ (void)PBArrayAdd_shortTitleArray;
+ (void)PBArrayAdd_LbsFlagType;
+ (void)PBArrayAdd_subLbsFlagType;
+ (void)PBArrayAdd_feedLatitude;
+ (void)PBArrayAdd_feedLongitude;
+ (void)PBArrayAdd_highLightDescription;
+ (void)PBArrayAdd_liveDescriptionExtend;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)finderMediaFromObject:(id)a0;
+ (void)backfillReportInfoFromOld:(id)a0 newModel:(id)a1;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (id)genObjectDesc;
- (void)setfeedIsRisky:(BOOL)a0;
- (id)getDisplayLocation;
- (BOOL)isCompleteLocalRes;
- (id)getMaterialLbsLocation;
- (BOOL)hasPlayMusicInfo;
- (void).cxx_destruct;

@end
