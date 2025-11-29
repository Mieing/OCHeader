@class NSString;

@interface IESLiveVirtualLiveXPlayRTCInfo : IESLiveDynamicMTLModel <MTLJSONSerializing, IESLiveXPlayRTCInfoProtocol>

@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *linkmicId;
@property (copy, nonatomic) NSString *rtcInfo;
@property (copy, nonatomic) NSString *livecoreInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cameraConfig;
- (id)rtcEncoderConfig;

@end
