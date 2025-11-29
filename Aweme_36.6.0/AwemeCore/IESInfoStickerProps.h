@class NSDictionary, NSString, SrtColor;

@interface IESInfoStickerProps : NSObject

@property (nonatomic) long long stickerId;
@property (nonatomic) float angle;
@property (nonatomic) float offsetX;
@property (nonatomic) float offsetY;
@property (nonatomic) float scale;
@property (nonatomic) float alpha;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long pinStatus;
@property (retain, nonatomic) SrtColor *srtColor;
@property (retain, nonatomic) NSString *srtFontPath;
@property (retain, nonatomic) NSString *srt;
@property (nonatomic) double srtStartTime;

- (void).cxx_destruct;
- (id)init;

@end
