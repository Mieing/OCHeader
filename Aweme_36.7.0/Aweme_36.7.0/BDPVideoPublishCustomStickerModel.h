@class NSString;

@interface BDPVideoPublishCustomStickerModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) double scale;
@property (nonatomic) double rotate;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void).cxx_destruct;

@end
