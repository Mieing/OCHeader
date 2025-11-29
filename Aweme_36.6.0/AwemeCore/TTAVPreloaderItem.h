@class NSString, NSArray;

@interface TTAVPreloaderItem : NSObject {
    NSArray *_supportedResolutionTypes;
}

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long resolution;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) double urlGenerateTime;
@property (nonatomic) int supportedResolutionMask;
@property (nonatomic) long long taskId;

- (id)supportedResolutionTypes;
- (void).cxx_destruct;

@end
