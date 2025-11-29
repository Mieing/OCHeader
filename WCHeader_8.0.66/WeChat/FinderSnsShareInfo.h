@class NSMutableArray;

@interface FinderSnsShareInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int shareCount;
@property (nonatomic) unsigned int watchingCount;
@property (retain, nonatomic) NSMutableArray *shareList;

+ (void)initialize;

@end
