@class NSString;

@interface DeviceRankUserProfile : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsUsername;
@property (retain, nonatomic) NSString *nsCoverUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsUsername;
+ (void)PBArrayAdd_nsCoverUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
