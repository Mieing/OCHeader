@class NSString, NSData;

@interface WCAdvertiseStorage : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *nsAdvertiseID;
@property (retain, nonatomic) NSString *nsUsername;
@property (nonatomic) unsigned int uiAdCreateTime;
@property (nonatomic) unsigned int uiAdDisplayTime;
@property (retain, nonatomic) NSData *oAdvertiseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsAdvertiseID;
+ (void)PBArrayAdd_nsUsername;
+ (void)PBArrayAdd_uiAdCreateTime;
+ (void)PBArrayAdd_uiAdDisplayTime;
+ (void)PBArrayAdd_oAdvertiseData;
+ (void)initialize;

@end
