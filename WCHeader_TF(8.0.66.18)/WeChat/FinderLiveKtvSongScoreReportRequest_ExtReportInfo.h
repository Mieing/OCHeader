@class NSString;

@interface FinderLiveKtvSongScoreReportRequest_ExtReportInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *phoneType;
@property (nonatomic) unsigned int audioType;
@property (nonatomic) unsigned int wiredDuration;
@property (nonatomic) unsigned int bluetoothDuration;
@property (nonatomic) unsigned int soundcardDuration;
@property (nonatomic) unsigned int speakerphoneDuration;
@property (nonatomic) unsigned int earpiceDuration;

+ (void)initialize;

@end
