@class NSString;

@interface IESECListKitExposureParamsFromClientModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *reportKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
