@class NSString, NSArray, NSNumber;

@interface WCFinderExtStatsReportModel : WCFinderExtStatsReportBaseModel

@property (retain, nonatomic) NSString *searchData;
@property (retain, nonatomic) NSArray *resultList;
@property (retain, nonatomic) NSNumber *fromTab;
@property (retain, nonatomic) NSNumber *toTab;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSString *strValue;
@property (copy, nonatomic) NSString *adExtraInfo;

- (id)generateOtherKVsDictionary;
- (void).cxx_destruct;

@end
