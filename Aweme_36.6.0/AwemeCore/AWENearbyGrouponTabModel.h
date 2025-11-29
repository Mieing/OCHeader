@class AWENearbyGrouponTabIconModel, NSString, AWENearbyGrouponTabLoadMoreFooter, AWENearbyGrouponTabRedDotModel;

@interface AWENearbyGrouponTabModel : AWEBaseApiModel

@property (nonatomic) long long tabID;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *filterInfo;
@property (copy, nonatomic) NSString *liveFilterInfo;
@property (retain, nonatomic) AWENearbyGrouponTabIconModel *tabIcon;
@property (nonatomic) BOOL clickItemTop;
@property (nonatomic) BOOL isFixed;
@property (retain, nonatomic) AWENearbyGrouponTabRedDotModel *redDot;
@property (retain, nonatomic) AWENearbyGrouponTabLoadMoreFooter *bottomBar;
@property (nonatomic) long long tabRank;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
