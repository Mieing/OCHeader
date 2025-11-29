@class NSString;

@interface AnnieLiveCloseLinkParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *reqSource;
@property (nonatomic) BOOL isNeedLeaveChannel;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
