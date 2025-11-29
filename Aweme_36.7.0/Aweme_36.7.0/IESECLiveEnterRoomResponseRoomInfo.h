@class NSArray, NSDictionary, NSString;

@interface IESECLiveEnterRoomResponseRoomInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *ecomLinkMicRoomIDS;
@property (retain, nonatomic) NSDictionary *trackEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
