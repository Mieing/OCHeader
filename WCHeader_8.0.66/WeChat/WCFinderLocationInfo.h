@class NSString, NSDate;

@interface WCFinderLocationInfo : NSObject <PBCoding>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSDate *timeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_timeStamp;
+ (void)initialize;
+ (id)locationInfoWithLocation:(id)a0;

- (id)getPBPropertyTable;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
