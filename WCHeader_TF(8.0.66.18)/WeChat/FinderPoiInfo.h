@class NSString, SnsPoiDetail;

@interface FinderPoiInfo : WXPBGeneratedMessage

@property (retain, nonatomic) SnsPoiDetail *snsPoiDetail;
@property (retain, nonatomic) NSString *highlightName;
@property (retain, nonatomic) NSString *highlightAddress;

+ (void)initialize;

@end
