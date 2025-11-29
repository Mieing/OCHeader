@class RTCInfo, NSString, IOSClientComponent, HTSLiveStreamUrl, NSNumber;

@interface IESLiveDirectorRoomModel : IESLiveDynamicModel <IESLiveBootableModel>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long viewID;
@property (retain, nonatomic) RTCInfo *rtcInfo;
@property (retain, nonatomic) HTSLiveStreamUrl *streamURL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, nonatomic) NSString *anchorIdentifier;
@property (readonly, nonatomic) IOSClientComponent *iosClientComponentData;
@property (readonly, nonatomic, getter=isTemplateRoom) BOOL templateRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
