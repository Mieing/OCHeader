@class NSString;

@interface VELensDirtyLensDetectorConfig : NSObject

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) id /* block */ resultBlock;

- (void).cxx_destruct;

@end
