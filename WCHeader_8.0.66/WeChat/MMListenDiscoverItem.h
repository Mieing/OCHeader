@class MMListenSubCategoryItem, NSString, MMListenCategoryItem, MMListenJumpInfo, MMListenDiscoverRefreshStrategy, MMListenDiscoverItemInteractInfo, MMListenRecommendInfo, MMListenUserInfo, NSMutableArray, MMListenItem;

@interface MMListenDiscoverItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *discoverId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) MMListenUserInfo *author;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (nonatomic) int duration;
@property (nonatomic) int unread;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) int titleRecommendType;
@property (retain, nonatomic) NSMutableArray *otherCovers;
@property (retain, nonatomic) NSMutableArray *topListenIds;
@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;
@property (retain, nonatomic) MMListenDiscoverItemInteractInfo *interactInfo;
@property (retain, nonatomic) MMListenItem *singleInfo;
@property (retain, nonatomic) MMListenSubCategoryItem *subCategoryInfo;
@property (retain, nonatomic) MMListenCategoryItem *categoryInfo;
@property (retain, nonatomic) NSMutableArray *topListenItems;
@property (retain, nonatomic) MMListenDiscoverRefreshStrategy *refreshStrategy;

+ (void)initialize;

@end
