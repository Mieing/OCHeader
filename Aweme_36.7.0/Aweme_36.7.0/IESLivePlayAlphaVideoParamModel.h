@class NSString, NSDictionary;

@interface IESLivePlayAlphaVideoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) BOOL enableAudio;
@property (nonatomic) BOOL enableVibrate;
@property (nonatomic) BOOL displayImmediately;
@property (nonatomic) BOOL aboveLynxView;
@property (copy, nonatomic) NSDictionary *trackExtra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
