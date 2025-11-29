@class FinderLiteAppParam;

@interface FinderUserPageSectionQAInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiteAppParam *qaTabLiteApp;
@property (nonatomic) unsigned int qaTotalCount;
@property (retain, nonatomic) FinderLiteAppParam *alltabContentLiteapp;

+ (void)initialize;

- (void)setAlltabContentLiteapp:(id)a0;
- (id)alltabContentLiteapp;
- (void)setQaTotalCount:(unsigned int)a0;
- (unsigned int)qaTotalCount;
- (void)setQaTabLiteApp:(id)a0;
- (id)qaTabLiteApp;

@end
