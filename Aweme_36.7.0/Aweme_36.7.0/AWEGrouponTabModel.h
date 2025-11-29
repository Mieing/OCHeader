@class NSString, AWEGrouponTabIconModel, AWEGrouponTabLoadMoreFooter, AWEGrouponTabRedDotModel;

@interface AWEGrouponTabModel : AWEBaseApiModel

@property (nonatomic) long long tabID;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *filterInfo;
@property (copy, nonatomic) NSString *liveFilterInfo;
@property (retain, nonatomic) AWEGrouponTabIconModel *tabIcon;
@property (nonatomic) BOOL clickItemTop;
@property (nonatomic) BOOL isFixed;
@property (retain, nonatomic) AWEGrouponTabRedDotModel *redDot;
@property (retain, nonatomic) AWEGrouponTabLoadMoreFooter *bottomBar;
@property (nonatomic) long long tabRank;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
