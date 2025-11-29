@class NSString;

@interface MMLimitedModeDataBecomeGuardianItemPB : MMObject <PBCoding>

@property (retain, nonatomic) NSString *guardianUserName;
@property (retain, nonatomic) NSString *wardUserName;
@property (nonatomic) unsigned int becomeGuardianTime;
@property (retain, nonatomic) NSString *ticket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_guardianUserName;
+ (void)PBArrayAdd_wardUserName;
+ (void)PBArrayAdd_becomeGuardianTime;
+ (void)PBArrayAdd_ticket;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
