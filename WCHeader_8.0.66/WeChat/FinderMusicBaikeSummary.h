@class NSString, MMListenCategoryItem, NSData;

@interface FinderMusicBaikeSummary : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *listenCategoryItem;
@property (nonatomic) unsigned int songsCount;
@property (nonatomic) unsigned int friendFavs;
@property (retain, nonatomic) NSString *baidkeIconUrl;
@property (retain, nonatomic) NSData *categoryItem;
@property (retain, nonatomic) NSString *baikeCardTitle;

+ (void)initialize;

@end
