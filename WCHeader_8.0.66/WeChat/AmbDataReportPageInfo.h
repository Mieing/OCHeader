@class NSString, NSMutableArray;

@interface AmbDataReportPageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int pageId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableArray *params;

+ (void)initialize;

- (void)setParams:(id)a0;
- (id)params;
- (void)setPageName:(id)a0;
- (id)pageName;
- (void)setPageId:(unsigned int)a0;
- (unsigned int)pageId;

@end
