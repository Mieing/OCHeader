@class NSString;

@interface IESLiveVsSeekHighLightParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *seekTime;
@property (copy, nonatomic) NSString *showToast;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
