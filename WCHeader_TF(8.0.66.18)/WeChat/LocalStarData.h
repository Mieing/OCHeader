@class NSString, StarData;

@interface LocalStarData : WXPBGeneratedMessage

@property (retain, nonatomic) StarData *starData;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *coverFilePath;

+ (void)initialize;

@end
