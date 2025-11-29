@class NSString;

@interface POIDetailReportParamModel : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *poiid;
@property (retain, nonatomic) NSString *poiCategoryKey;
@property (nonatomic) int pageState;
@property (retain, nonatomic) NSString *poiSessionid;
@property (nonatomic) unsigned int poiBizSource;

+ (void)initialize;

@end
