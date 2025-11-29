@class NSString;

@interface IESMMEffectStickerInfo : NSObject

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int stickerID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSString *stickerTag;
@property (nonatomic) BOOL canUseAmazing;
@property (nonatomic) long long multiCamMode;
@property (nonatomic) BOOL needReload;
@property (nonatomic) int load_resource_timeOut;
@property (nonatomic) BOOL isfreezeFrame;
@property (nonatomic) BOOL syncTimeDomain;
@property (nonatomic) long long backnedMode;
@property (nonatomic) BOOL backendUseOutput;
@property (nonatomic) BOOL useVersion2;
@property (nonatomic) unsigned long long stickerIDV2;
@property (nonatomic) BOOL useCancelStiker;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
