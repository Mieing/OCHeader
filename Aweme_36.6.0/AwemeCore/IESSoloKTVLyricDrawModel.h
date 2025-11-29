@class NSString;

@interface IESSoloKTVLyricDrawModel : NSObject

@property (nonatomic) float scale;
@property (nonatomic) BOOL isFocus;
@property (nonatomic) double leftOffsetPx;
@property (nonatomic) double wordWidthPx;
@property (retain, nonatomic) NSString *imageKey;
@property (retain, nonatomic) NSString *selectImageKey;
@property (retain, nonatomic) NSString *sentenceStr;
@property (nonatomic) BOOL isDisable;
@property (retain, nonatomic) NSString *disableImageKey;
@property (nonatomic) double alpha;

- (void).cxx_destruct;

@end
