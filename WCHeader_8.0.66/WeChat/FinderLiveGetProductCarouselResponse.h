@class NSMutableArray;

@interface FinderLiveGetProductCarouselResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *showWords;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int switchSecond;
@property (nonatomic) unsigned int needSync;
@property (nonatomic) unsigned int isPermanent;

+ (void)initialize;

@end
