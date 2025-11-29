@class NSString, NSMutableArray;

@interface AmbDataReportPageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int pageId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableArray *params;

+ (void)initialize;

@end
