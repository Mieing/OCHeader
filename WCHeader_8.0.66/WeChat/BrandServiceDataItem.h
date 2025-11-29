@class NSString;

@interface BrandServiceDataItem : NSObject <PBCoding>

@property (nonatomic) BOOL hasSetLocation;
@property (nonatomic) unsigned int receiveSwitchOffTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hasSetLocation;
+ (void)PBArrayAdd_receiveSwitchOffTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
