@class MusicRingBack, NSString, MusicRingBackHitInfo, NSMutableArray;

@interface MusicRingBackDetail : WXPBGeneratedMessage

@property (retain, nonatomic) MusicRingBack *ringBack;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSMutableArray *singers;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) MusicRingBackHitInfo *hitInfo;
@property (nonatomic) unsigned int musicType;
@property (nonatomic) unsigned long long settingCount;

+ (void)initialize;

@end
