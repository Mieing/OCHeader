@class NSNumber, IESECLiveInstantUserAddressInfo, NSString;

@interface IESECLivePopRoomInfoV2 : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *virtualRoomID;
@property (retain, nonatomic) IESECLiveInstantUserAddressInfo *addressInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)addressInfoJSONTransformer;

- (void).cxx_destruct;

@end
