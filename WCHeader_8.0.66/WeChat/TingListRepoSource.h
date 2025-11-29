@class MMListenRecommendInfo, NSString, MMListenCategoryItem, TingListSourceContext, NSMutableArray;

@interface TingListRepoSource : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) NSString *mpAlbumId;
@property (retain, nonatomic) NSMutableArray *listenIdList;
@property (nonatomic) BOOL coordinateByBaseListenId;
@property (retain, nonatomic) NSMutableArray *topListenIdList;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (retain, nonatomic) NSString *positionListenId;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) TingListSourceContext *context;
@property (retain, nonatomic) NSString *positionListenUuid;

+ (void)initialize;

@end
