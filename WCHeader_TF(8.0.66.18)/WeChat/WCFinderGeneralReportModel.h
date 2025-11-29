@class NSString;

@interface WCFinderGeneralReportModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *svrReportJsonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_svrReportJsonString;
+ (void)initialize;
+ (id)convertFromGeneralReportPB:(id)a0;

- (id)getPBPropertyTable;
- (id)genPBGeneralReportInfo;
- (void).cxx_destruct;

@end
