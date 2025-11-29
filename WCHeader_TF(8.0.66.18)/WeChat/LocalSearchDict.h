@class NSMutableArray;

@interface LocalSearchDict : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int maxDictSize;

+ (void)initialize;

@end
