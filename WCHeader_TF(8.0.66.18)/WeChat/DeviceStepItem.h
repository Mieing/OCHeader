@class NSString;

@interface DeviceStepItem : MMObject <PBCoding>

@property (nonatomic) unsigned int uiTimeStamp;
@property (nonatomic) unsigned int uiStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiTimeStamp;
+ (void)PBArrayAdd_uiStep;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
