@class ACCVideoQualityBaseSource;

@interface ACCVideoQualitySourceHolder : NSObject

@property (weak, nonatomic) ACCVideoQualityBaseSource *source;

+ (id)shared;

- (void).cxx_destruct;

@end
