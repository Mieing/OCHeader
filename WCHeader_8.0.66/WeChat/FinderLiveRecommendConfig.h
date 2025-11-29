@class NSMutableArray, FinderJumpInfo;

@interface FinderLiveRecommendConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int noRecommendToFriend;
@property (nonatomic) BOOL noRecommendToAllCity;
@property (retain, nonatomic) NSMutableArray *recommendCityList;
@property (retain, nonatomic) FinderJumpInfo *citySelectorJumpInfo;
@property (retain, nonatomic) NSMutableArray *translateRecommendCityList;
@property (nonatomic) unsigned int recommendCityCount;

+ (void)initialize;

@end
