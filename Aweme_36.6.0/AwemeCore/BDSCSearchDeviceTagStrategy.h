@class NSString, NSMutableDictionary, BDSCSearchDeviceTagConfig;

@interface BDSCSearchDeviceTagStrategy : NSObject <BDModelCustom>

@property (retain, nonatomic) NSMutableDictionary *protocolTagConfig;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL topEnable;
@property (retain, nonatomic) BDSCSearchDeviceTagConfig *commonConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)tagConfigForProtocol:(unsigned long long)a0;
- (void).cxx_destruct;

@end
