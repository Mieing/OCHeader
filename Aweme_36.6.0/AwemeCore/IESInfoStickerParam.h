@class NSString, SrtColor;

@interface IESInfoStickerParam : NSObject <NSCopying>

@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double radian;
@property (nonatomic) double scale;
@property (nonatomic) double alpha;
@property (nonatomic) double adjustScale;
@property (nonatomic) BOOL pauseAnimation;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) long long animId;
@property (nonatomic) double inTime;
@property (nonatomic) double stillTime;
@property (nonatomic) double outTime;
@property (retain, nonatomic) SrtColor *srtColor;
@property (retain, nonatomic) NSString *srtFontPath;
@property (retain, nonatomic) NSString *srt;
@property (nonatomic) double srtTrimIn;
@property (nonatomic) double srtDuration;
@property (nonatomic) BOOL isAudioCycle;
@property (nonatomic) double srtInitPosX;
@property (nonatomic) double srtInitPosY;

+ (id)stickerParmWithDic:(id)a0;

- (id)toDicParam;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
