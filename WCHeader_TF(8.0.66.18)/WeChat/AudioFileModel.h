@class NSString;

@interface AudioFileModel : NSObject

@property (nonatomic) int sampleRate;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double *data;
@property (copy, nonatomic) NSString *ringId;

- (void).cxx_destruct;

@end
