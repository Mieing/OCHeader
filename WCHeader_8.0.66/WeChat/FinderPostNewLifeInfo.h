@class NSMutableArray, FinderPostNewLifeInfo_NewLifeReportInfo;

@interface FinderPostNewLifeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderPostNewLifeInfo_NewLifeReportInfo *reportInfo;
@property (retain, nonatomic) NSMutableArray *metaData;

+ (void)initialize;

- (void)setMetaData:(id)a0;
- (id)metaData;
- (void)setReportInfo:(id)a0;
- (id)reportInfo;

@end
