@class NSString, NSMutableArray;

@interface WCFinderMemberStatisticalInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *statisticalInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_statisticalInfoList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

@end
