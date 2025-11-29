@class NSString;

@interface WAPackageSweeperExtendKeepDurationMark : NSObject <PBCoding>

@property (nonatomic) unsigned int expirationTimeStamp;
@property (nonatomic) unsigned int aboveVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_expirationTimeStamp;
+ (void)PBArrayAdd_aboveVersion;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
