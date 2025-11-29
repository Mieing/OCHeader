@class NSArray, NSString, BDSCSearchDeviceTagStrategy;

@interface BDSCSearchDeviceShowStrategy : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL autoConnectDisable;
@property (retain, nonatomic) BDSCSearchDeviceTagStrategy *tagStrategy;
@property (copy, nonatomic) NSArray *protocolPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
