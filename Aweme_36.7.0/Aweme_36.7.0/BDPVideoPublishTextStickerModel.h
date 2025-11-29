@class NSString;

@interface BDPVideoPublishTextStickerModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) double scale;
@property (nonatomic) double rotate;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void).cxx_destruct;

@end
