@class NSString, NSMutableArray;

@interface MMListenMusicInfo_GenreInfo_Item : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSMutableArray *coverUrls;
@property (nonatomic) int categoryType;

+ (void)initialize;

- (void)setCategoryType:(int)a0;
- (int)categoryType;
- (void)setCoverUrls:(id)a0;
- (id)coverUrls;
- (void)setSubTitle:(id)a0;
- (id)subTitle;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setCategoryId:(id)a0;
- (id)categoryId;

@end
