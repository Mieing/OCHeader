@class NSString, NSMutableArray, IESMMKeyFrameInfo;

@interface IESMMAudioSamiProcessorConfig : IESMMAudioEffectConfig

@property (copy, nonatomic) NSString *resourceJsonFilePath;
@property (copy, nonatomic) NSString *resourceFindPath;
@property (retain, nonatomic) NSMutableArray *paramIndex;
@property (retain, nonatomic) NSMutableArray *params;
@property (retain, nonatomic) IESMMKeyFrameInfo *audioFilterFrameInfo;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;

@end
