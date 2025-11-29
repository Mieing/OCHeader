@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEPlayletSchemaModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *playletID;
@property (nonatomic) long long fromOrder;
@property (nonatomic) long long preCurrentEpisode;
@property (nonatomic) BOOL hidePanel;
@property (copy, nonatomic) NSDictionary *initialLogExtras;
@property (copy, nonatomic) NSString *feedGroupID;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) BOOL isFromContentXtab;
@property (copy, nonatomic) NSString *enterSource;
@property (copy, nonatomic) NSString *fromBarName;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *schemaOriginalParams;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *needHistory;
@property (copy, nonatomic) NSString *fromContentType;
@property (copy, nonatomic) NSString *fromContentId;
@property (copy, nonatomic) NSString *jumpSkitInnerStreamFromAuthorId;
@property (copy, nonatomic) NSString *customCurrentParams;
@property (copy, nonatomic) NSString *customAllParams;
@property (copy, nonatomic) NSDictionary *showTrackerSchemaParams;
@property (nonatomic) long long isAd;
@property (nonatomic) long long adId;
@property (nonatomic) long long isSoftAd;
@property (copy, nonatomic) NSString *fromHotGroupId;
@property (copy, nonatomic) NSNumber *creativeId;
@property (nonatomic) BOOL isDoubleStock;
@property (nonatomic) long long playVideoType;
@property (nonatomic) long long fromFreeWatchBtn;
@property (copy, nonatomic) NSString *growthDeepevent;
@property (copy, nonatomic) NSString *gdLabel;
@property (copy, nonatomic) NSString *taskSceneId;
@property (copy, nonatomic) NSArray *taskTypeList;
@property (copy, nonatomic) NSString *transferParams;
@property (nonatomic) BOOL paymentAutoPurchase;
@property (nonatomic) long long seriesMaterialType;
@property (retain, nonatomic) NSNumber *seriesAwemeIndex;
@property (retain, nonatomic) NSString *activeRelativeTag;
@property (retain, nonatomic) NSNumber *activeRelativeAwemeSubTag;
@property (copy, nonatomic) NSString *recommendPreviousPage;
@property (copy, nonatomic) NSString *recommendIsOuter;
@property (copy, nonatomic) NSString *entertainmentRecommendInfo;
@property (copy, nonatomic) NSString *preCurrentItemId;
@property (copy, nonatomic) NSArray *transferServerParamsArrays;
@property (copy, nonatomic) NSString *trackParamsString;
@property (readonly, copy, nonatomic) NSString *innerplayEnterMethod;
@property (copy, nonatomic) NSString *popupSchema;
@property (copy, nonatomic) NSString *advertiseParam;

+ (id)enterMethodCache;
+ (id)previousPageCache;

- (void)configureDataWithParams:(id)a0;
- (BOOL)hasValidEnterMethod;
- (BOOL)hasValidPreviousPage;
- (id)updateHighlightParamsInLogExtra:(id)a0;
- (void).cxx_destruct;

@end
