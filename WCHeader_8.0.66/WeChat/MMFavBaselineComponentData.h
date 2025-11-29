@class NSString, NSArray, FavoritesItem, UIImage;

@interface MMFavBaselineComponentData : MMComponentData

@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic) unsigned int uiFavUpDateTime;
@property (retain, nonatomic) NSString *authorName;
@property (retain, nonatomic) NSString *nameId;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned int usedTimes;
@property (nonatomic) BOOL bShowDataSize;
@property (retain, nonatomic) NSArray *tagList;
@property (retain, nonatomic) FavoritesItem *item;
@property (retain, nonatomic) UIImage *logoImage;
@property (retain, nonatomic) NSString *nameTailContent;
@property (nonatomic) BOOL shouldHideSourceNameLabel;

- (void)fixComponentWidth;
- (void).cxx_destruct;

@end
