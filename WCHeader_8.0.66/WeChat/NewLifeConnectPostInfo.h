@class NSString, NewLifeConnectPostReportInfo, NSMutableArray, FinderLocation;

@interface NewLifeConnectPostInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *imageList;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) NewLifeConnectPostReportInfo *reportInfo;
@property (retain, nonatomic) NSMutableArray *recommendTags;
@property (retain, nonatomic) FinderLocation *location;

+ (void)initialize;

@end
