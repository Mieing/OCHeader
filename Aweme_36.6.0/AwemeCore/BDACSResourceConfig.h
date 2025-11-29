@class NSString, NSDictionary;

@interface BDACSResourceConfig : NSObject

@property (readonly, nonatomic) BOOL onlyWIFIReport;
@property (readonly, nonatomic) long long maxReportTimes;
@property (readonly, nonatomic) long long fileSizeLimit;
@property (readonly, nonatomic) long long packageSizeLimit;
@property (readonly, copy, nonatomic) NSString *reportKey;
@property (readonly, copy, nonatomic) NSString *reportURL;
@property (readonly, copy, nonatomic) NSDictionary *allowCIDList;
@property (readonly, copy, nonatomic) NSDictionary *allowHostList;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
