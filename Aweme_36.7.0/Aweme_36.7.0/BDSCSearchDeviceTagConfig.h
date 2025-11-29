@class NSString, BDSCSearchDeviceTagContentConfig;

@interface BDSCSearchDeviceTagConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long priority;
@property (retain, nonatomic) BDSCSearchDeviceTagContentConfig *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
