@class NSString;

@interface DeviceProfileButton : MMObject <PBCoding>

@property (copy, nonatomic) NSString *uiTitle;
@property (copy, nonatomic) NSString *nsUrl;
@property (copy, nonatomic) NSString *uiIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiIcon;
+ (void)PBArrayAdd_uiTitle;
+ (void)PBArrayAdd_nsUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
