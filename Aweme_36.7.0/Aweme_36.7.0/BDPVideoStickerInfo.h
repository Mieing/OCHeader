@class NSString;

@interface BDPVideoStickerInfo : NSObject

@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double alpha;
@property (nonatomic) double scale;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (void).cxx_destruct;
- (id)init;

@end
