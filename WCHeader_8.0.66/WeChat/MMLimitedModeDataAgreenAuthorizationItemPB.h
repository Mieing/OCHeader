@class NSString;

@interface MMLimitedModeDataAgreenAuthorizationItemPB : MMObject <PBCoding>

@property (retain, nonatomic) NSString *businesskey;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *guardianUserName;
@property (retain, nonatomic) NSString *wardUserName;
@property (nonatomic) unsigned int agreenAuthorizationTime;
@property (nonatomic) unsigned long long requestAuthorizationMsgid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_businesskey;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_guardianUserName;
+ (void)PBArrayAdd_wardUserName;
+ (void)PBArrayAdd_agreenAuthorizationTime;
+ (void)PBArrayAdd_requestAuthorizationMsgid;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
