@class NSString;

@interface MJMovieComposingVideoSavedInfo : NSObject

@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) long long composingStepIndex;
@property (readonly, nonatomic) NSString *checksum;

- (id)initWithVideoFilePath:(id)a0 composingStepIndex:(long long)a1 checksum:(id)a2;
- (void).cxx_destruct;

@end
