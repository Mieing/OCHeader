@class NSString, HTSLiveCommon, HTSLiveDeviceViewInfo;

@interface HTSLiveCameraDirectorNotifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long connectedNum;
@property (retain, nonatomic) HTSLiveDeviceViewInfo *currentDeviceView;
@property (nonatomic) BOOL hasCurrentDeviceView;
@property (retain, nonatomic) HTSLiveDeviceViewInfo *mainDeviceView;
@property (nonatomic) BOOL hasMainDeviceView;
@property (retain, nonatomic) HTSLiveDeviceViewInfo *subDeviceView;
@property (nonatomic) BOOL hasSubDeviceView;

+ (id)descriptor;

@end
