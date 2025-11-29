@class AWENearbySearchTransInfo, NSString, AWEAwemeModel, NSNumber;

@interface AWENearbyC2FeedContext : NSObject <NSCopying>

@property (nonatomic) long long maxExposedCellIndex;
@property (nonatomic) BOOL didBackScrollToTop;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWENearbySearchTransInfo *searchTransInfo;
@property (retain, nonatomic) NSString *cityCode;
@property (nonatomic) struct CGPoint { double x; double y; } scrollViewContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } childContentOffset;
@property (nonatomic) long long scrollerDirection;
@property (nonatomic) double maxScrollDistance;
@property (nonatomic) double maxScrollContentOffsetY;
@property (nonatomic) long long maxShowedCellIndex;
@property (nonatomic) BOOL isBackToTopScroll;
@property (nonatomic) unsigned long long manualActionType;
@property (nonatomic) BOOL isHeadAreaFreezeStyle;
@property (copy, nonatomic) NSString *previousEnterMethod;
@property (copy, nonatomic) NSString *previousEnterFrom;
@property (nonatomic) BOOL isGuideShow;
@property (nonatomic) BOOL isSearchSchemaUndertake;
@property (nonatomic) unsigned long long willRefreshType;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) NSNumber *headAreaImageDefaultHeight;
@property (nonatomic) double pageViewDidLoadTime;
@property (nonatomic) long long homepageLifeTabID;
@property (nonatomic) long long homepageLifeTabRank;
@property (retain, nonatomic) NSString *homepageLifeTabName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
