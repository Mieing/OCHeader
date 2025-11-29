@class NSString, MMListenCategoryItem, MMListenSearchResultItem_LikeInfo, MMListenItem, MMListenClassicWorksInfo;

@interface MMListenSearchResultItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *recommendDesc;
@property (nonatomic) int type;
@property (retain, nonatomic) MMListenItem *item;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenSearchResultItem_LikeInfo *likeInfo;
@property (retain, nonatomic) MMListenClassicWorksInfo *classicWorksInfo;
@property (retain, nonatomic) NSString *listenReportInfo;
@property (retain, nonatomic) NSString *searchReportInfo;

+ (void)initialize;

@end
