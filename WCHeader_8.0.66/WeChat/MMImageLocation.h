@class NSString;

@interface MMImageLocation : MMObject <PBCoding>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
