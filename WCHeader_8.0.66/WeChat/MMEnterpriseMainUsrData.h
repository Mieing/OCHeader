@class NSString, NSMutableDictionary;

@interface MMEnterpriseMainUsrData : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicNewArrivalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicNewArrivalCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
