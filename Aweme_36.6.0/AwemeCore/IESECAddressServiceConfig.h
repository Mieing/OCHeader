@class IESECAddressServiceAddressUpdateConfig, IESECAddressServiceConfigAddressStrategy, IESECAddressServiceLocationConfig, NSArray, IESECAddressServicePageBtmCode, NSString, IESECAddressServiceAddressNotifyDialogConfig;

@interface IESECAddressServiceConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECAddressServiceConfigAddressStrategy *strategy;
@property (retain, nonatomic) IESECAddressServiceAddressNotifyDialogConfig *notifyDialogConfig;
@property (retain, nonatomic) IESECAddressServiceAddressUpdateConfig *addressUpdateConfig;
@property (retain, nonatomic) IESECAddressServiceLocationConfig *locateConfig;
@property (copy, nonatomic) NSArray *hookSchemaList;
@property (retain, nonatomic) IESECAddressServicePageBtmCode *pageBtmCode;
@property (nonatomic) BOOL useDefaultLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hookSchemaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
