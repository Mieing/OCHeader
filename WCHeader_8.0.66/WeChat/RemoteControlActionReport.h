@interface RemoteControlActionReport : MMObject

+ (void)reportDataForAction:(unsigned int)a0 scene:(unsigned int)a1;
+ (void)ReportBeginRecordForChat;
+ (void)ReportFinishRecordForChat;
+ (void)ReportBeginRecordForWXTalk;
+ (void)ReportFinishRecordForWXTalk;
+ (void)ReportPlay;
+ (void)ReportPause;
+ (void)ReportStop;
+ (void)ReportNextTrack;
+ (void)ReportPrevTrack;

@end
