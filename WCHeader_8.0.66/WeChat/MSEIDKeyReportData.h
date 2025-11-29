@class NSArray, NSString;

@interface MSEIDKeyReportData : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *idKeyReportList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_idKeyReportList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
