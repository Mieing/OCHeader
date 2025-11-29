@class NSString;

@interface WAStarAppItemOperation : MMObject <PBCoding>

@property (copy, nonatomic) NSString *operUsername;
@property (nonatomic) unsigned int operAppType;
@property (copy, nonatomic) NSString *preUsername;
@property (nonatomic) unsigned int preAppType;
@property (copy, nonatomic) NSString *nextUsername;
@property (nonatomic) unsigned int nextAppType;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) unsigned int operationScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_operUsername;
+ (void)PBArrayAdd_operAppType;
+ (void)PBArrayAdd_preUsername;
+ (void)PBArrayAdd_preAppType;
+ (void)PBArrayAdd_nextUsername;
+ (void)PBArrayAdd_nextAppType;
+ (void)PBArrayAdd_operationType;
+ (void)PBArrayAdd_operationScene;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
