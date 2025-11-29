@class NSNumber, NSString;

@interface MBMediaOpIdContext : NSObject

@property (retain, nonatomic) NSNumber *containerId;
@property (nonatomic) int canvasId;
@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *videoThumbPath;

- (void).cxx_destruct;

@end
