@class NSNumber, NSString;

@interface IESECLiveInstantUserAddressInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *addressType;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSString *addressStrategyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
