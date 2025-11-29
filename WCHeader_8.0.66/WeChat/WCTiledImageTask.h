@class NSString;

@interface WCTiledImageTask : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } tileSize;

- (void).cxx_destruct;

@end
