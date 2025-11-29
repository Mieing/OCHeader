@class ToygerAlgorithmConfig, APBToygerUploadConfig;

@interface ToygerConfig : NSObject

@property (retain, nonatomic) ToygerAlgorithmConfig *algorithm;
@property (retain, nonatomic) APBToygerUploadConfig *upload;
@property (nonatomic) BOOL autoComplete;
@property (nonatomic) int optionalImageCount;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
