@class NSString;

@interface CameraScanGoodsScanDotInfo : NSObject

@property (retain, nonatomic) NSString *dotID;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenter;

- (void).cxx_destruct;

@end
