@class NSString;

@interface WCFinderIpRegionInfo : NSObject <PBCoding, WCTColumnCoding>

@property (copy, nonatomic) NSString *regionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_regionText;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithRegionInfo:(id)a0;
- (id)genFinderRegionInfo;
- (void).cxx_destruct;

@end
