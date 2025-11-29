@class NSString, NSMutableArray;

@interface MMListenMusicInfo_GenreInfo_Item : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableArray *coverUrls;
@property (nonatomic) int categoryType;

+ (void)initialize;

@end
