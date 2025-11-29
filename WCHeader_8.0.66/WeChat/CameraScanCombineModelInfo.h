@class NSString;

@interface CameraScanCombineModelInfo : NSObject

@property (nonatomic) long long modelVersion;
@property (copy, nonatomic) NSString *detectParamPath;
@property (copy, nonatomic) NSString *detectModelPath;
@property (copy, nonatomic) NSString *classifyParamPath;
@property (copy, nonatomic) NSString *classifyModelPath;
@property (copy, nonatomic) NSString *modelConfig;
@property (nonatomic) BOOL useXNet;

- (void).cxx_destruct;

@end
