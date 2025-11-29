@class NSString;

@interface BizAttrSyncCtrl : MMObject <PBCoding>

@property (nonatomic) unsigned long long requestInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_requestInterval;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
