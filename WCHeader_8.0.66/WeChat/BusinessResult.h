@class WSReportInfo, NSMutableArray, NSData;

@interface BusinessResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSMutableArray *bizResults;
@property (retain, nonatomic) NSMutableArray *weappResults;
@property (retain, nonatomic) NSMutableArray *docResults;
@property (retain, nonatomic) NSMutableArray *widgetResults;
@property (retain, nonatomic) WSReportInfo *reportInfo;
@property (retain, nonatomic) NSData *debugInfo;
@property (retain, nonatomic) NSMutableArray *pardusResults;

+ (void)initialize;

@end
