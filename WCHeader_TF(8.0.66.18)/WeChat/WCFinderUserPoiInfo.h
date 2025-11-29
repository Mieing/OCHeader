@class NSString, SnsPoiDetail, NSMutableArray;

@interface WCFinderUserPoiInfo : NSObject

@property (retain, nonatomic) SnsPoiDetail *snsPoiDetail;
@property (copy, nonatomic) NSString *highlightName;
@property (copy, nonatomic) NSString *highlightAddress;
@property (copy, nonatomic) NSString *normalName;
@property (copy, nonatomic) NSString *normalAddress;
@property (copy, nonatomic) NSString *normalDetail;
@property (retain, nonatomic) NSMutableArray *highlightNameKeywords;
@property (retain, nonatomic) NSMutableArray *highlightAddressKeywords;

+ (id)finderPOIInfo:(id)a0;

- (void)processHighlightName;
- (void)processHighlightAddress;
- (void).cxx_destruct;

@end
