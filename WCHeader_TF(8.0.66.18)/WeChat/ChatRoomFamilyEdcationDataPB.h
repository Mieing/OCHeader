@class NSString, NSMutableArray;

@interface ChatRoomFamilyEdcationDataPB : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *familyEdcationHadGetContactUserNameList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_familyEdcationHadGetContactUserNameList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
