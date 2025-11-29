@class NSString, VideoPKParams;

@interface LiveSdkVideoParams : WXPBGeneratedMessage

@property (nonatomic) unsigned int encResEnum;
@property (nonatomic) unsigned int resModeEnum;
@property (nonatomic) unsigned int capFps;
@property (nonatomic) unsigned int encBr;
@property (nonatomic) unsigned int encAdjustRes;
@property (nonatomic) unsigned int qosPreferneceEnum;
@property (nonatomic) unsigned int qosControlModeEnum;
@property (nonatomic) unsigned int encResEnumScreenrecord;
@property (nonatomic) unsigned int capFpsScreenrecord;
@property (nonatomic) unsigned int encBrScreenrecord;
@property (nonatomic) unsigned int encBrMin;
@property (nonatomic) unsigned int hevcEncEnable;
@property (nonatomic) unsigned int encResEnumHevc;
@property (nonatomic) unsigned int capFpsHevc;
@property (nonatomic) unsigned int encBrHevc;
@property (nonatomic) unsigned int encBrHevcMin;
@property (nonatomic) unsigned int encGop;
@property (retain, nonatomic) NSString *encoderCfgJson;
@property (retain, nonatomic) VideoPKParams *micBig9X16;
@property (retain, nonatomic) VideoPKParams *micMiddle9X16;
@property (retain, nonatomic) VideoPKParams *micSmall9X16;
@property (retain, nonatomic) VideoPKParams *micMiddle1X1;
@property (retain, nonatomic) VideoPKParams *micSmall1X1;
@property (nonatomic) unsigned int switch2K;
@property (nonatomic) unsigned int clip2021;

+ (void)initialize;

@end
