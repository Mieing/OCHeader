@class NSMutableArray;

@interface PicStats : WXPBGeneratedMessage

@property (nonatomic) unsigned int totalPicNum;
@property (retain, nonatomic) NSMutableArray *stats;

+ (void)initialize;

@end
