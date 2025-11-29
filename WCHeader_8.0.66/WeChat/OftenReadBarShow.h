@class NSString;

@interface OftenReadBarShow : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) unsigned int isGreenPoint;
@property (nonatomic) unsigned int rank;
@property (nonatomic) unsigned int showTime;
@property (nonatomic) unsigned int showCount;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *syncBuf;
@property (nonatomic) unsigned int isIconCache;
@property (nonatomic) unsigned int isDefaultIcon;
@property (nonatomic) unsigned int seqId;
@property (nonatomic) unsigned long long showTimeMs;
@property (nonatomic) unsigned int barType;
@property (nonatomic) unsigned int liveStatus;
@property (retain, nonatomic) NSString *liveExportId;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) unsigned int posReason;
@property (nonatomic) unsigned int isEarlierLive;
@property (nonatomic) int greenDotType;
@property (nonatomic) unsigned int memberZoneStatus;
@property (nonatomic) unsigned long long finderUin;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
