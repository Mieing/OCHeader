@class MMLiveSEIRecordScreenInfo, NSArray, NSDictionary, MMLiveSEIKTVStateInfo, MMLiveAnchorSEILiveModeInfo, MMLiveSEIConnectMicMsg, MMLiveAudioRoomSEIConnectMicMsg;

@interface MMLiveAnchorSEIInfo : NSObject

@property (retain, nonatomic) NSDictionary *baseInfoDic;
@property (retain, nonatomic) MMLiveSEIConnectMicMsg *connectMicSEIInfo;
@property (retain, nonatomic) NSArray *freeMicUsersSEIInfoList;
@property (retain, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomMicSEIInfo;
@property (retain, nonatomic) MMLiveAnchorSEILiveModeInfo *liveModeInfo;
@property (retain, nonatomic) MMLiveSEIKTVStateInfo *ktvStateInfo;
@property (retain, nonatomic) MMLiveSEIRecordScreenInfo *recordScreenInfo;

- (void).cxx_destruct;

@end
