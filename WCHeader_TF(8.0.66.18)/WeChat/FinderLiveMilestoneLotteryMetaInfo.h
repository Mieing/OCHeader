@class NSString, NSMutableArray;

@interface FinderLiveMilestoneLotteryMetaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *infos;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned long long progressTarget;
@property (nonatomic) unsigned long long progressCount;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *topDecoratorImgUrl;
@property (retain, nonatomic) NSMutableArray *colorConfigList;

+ (void)initialize;

@end
