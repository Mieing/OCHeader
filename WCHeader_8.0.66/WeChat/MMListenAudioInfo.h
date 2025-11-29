@class NSString;

@interface MMListenAudioInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long entryPointMs;
@property (nonatomic) unsigned int playSpeedRatio;
@property (nonatomic) unsigned long long showFlag;
@property (retain, nonatomic) NSString *lineId;
@property (retain, nonatomic) NSString *clientReportInfo;
@property (nonatomic) unsigned long long startTimeMs;

+ (void)initialize;

@end
