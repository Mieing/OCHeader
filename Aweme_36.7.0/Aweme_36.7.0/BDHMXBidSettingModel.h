@class NSString, NSArray, NSDictionary;

@interface BDHMXBidSettingModel : NSObject

@property (nonatomic) long long hitSample;
@property (copy, nonatomic) NSString *bid;
@property (retain, nonatomic) NSArray *regexList;
@property (retain, nonatomic) NSDictionary *bidEventSample;

- (void)parseDictionary:(id)a0;
- (BOOL)needReportWithServiceType:(long long)a0;
- (BOOL)needReportWithServiceName:(id)a0;
- (BOOL)isTeaSwitchOpen;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
