@class NSString, NSArray, NSNumber;

@interface AWEProfileUpdateDataFavoriteRedDotModel : AWEBaseApiModel <AWEProfileRedDotNodeModelProtocol>

@property (nonatomic) long long count;
@property (nonatomic) long long redDotType;
@property (nonatomic) BOOL firstLevelShow;
@property (nonatomic) BOOL secondLevelShow;
@property (copy, nonatomic) NSString *bubbleIcon;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *redDotText;
@property (copy, nonatomic) NSString *bubbleID;
@property (nonatomic) long long redDotCategory;
@property (retain, nonatomic) NSArray *unreadCollectionsIds;
@property (nonatomic) long long latestUpdateTime;
@property (nonatomic) unsigned long long bizFavoriteType;
@property (copy, nonatomic) NSString *forceInsertList;
@property (nonatomic) long long bubbleAction;
@property (copy, nonatomic) NSString *objectSvrData;
@property (copy, nonatomic) NSString *cycleItemList;
@property (copy, nonatomic) NSNumber *cycleInterval;
@property (copy, nonatomic) NSString *componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
