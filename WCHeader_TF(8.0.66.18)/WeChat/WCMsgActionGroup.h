@class NSString, SnsAction;

@interface WCMsgActionGroup : NSObject <PBCoding>

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned long long parentId;
@property (retain, nonatomic) SnsAction *currentAction;
@property (retain, nonatomic) SnsAction *referAction;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int objectCreateTime;
@property (nonatomic) unsigned int delStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_id;
+ (void)PBArrayAdd_parentId;
+ (void)PBArrayAdd_currentAction;
+ (void)PBArrayAdd_referAction;
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_objectCreateTime;
+ (void)PBArrayAdd_delStatus;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
