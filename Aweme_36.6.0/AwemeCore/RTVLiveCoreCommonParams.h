@class NSNumber, NSString;

@interface RTVLiveCoreCommonParams : JSONModel

@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *numberOfChannels;
@property (copy, nonatomic) NSString *audioCodec;
@property (copy, nonatomic) NSString *audioProfile;
@property (copy, nonatomic) NSString *videoCodec;
@property (copy, nonatomic) NSString *videoProfile;
@property (retain, nonatomic) NSNumber *videoFPS;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
