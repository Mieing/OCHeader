@class NSString, NSMutableDictionary;

@interface WAPackageSweeperRegisterationMark : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicExtendKeepDurationMarks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicExtendKeepDurationMarks;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
