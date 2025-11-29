@class NSArray, NSString;

@interface WCPayBankPriority : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *bankinfo_array;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bankinfo_array;
+ (void)initialize;
+ (BOOL)saveBankPriorityData:(id)a0;
+ (id)getLocalBankPriorityData;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
