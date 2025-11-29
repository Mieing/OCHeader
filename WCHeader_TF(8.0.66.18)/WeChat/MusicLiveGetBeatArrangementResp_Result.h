@class NSString;

@interface MusicLiveGetBeatArrangementResp_Result : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clientid;
@property (nonatomic) unsigned int timeOffsetInClipMs;
@property (nonatomic) unsigned int timeLengthInClipMs;

+ (void)initialize;

@end
