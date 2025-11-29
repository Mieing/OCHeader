@class NSString, NSMutableArray;

@interface FinderLiveSeiStatInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *transcodeTemplateId;
@property (retain, nonatomic) NSMutableArray *seiInfos;
@property (nonatomic) unsigned int missedSeiCount;

+ (void)initialize;

@end
