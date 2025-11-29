@class NSString;

@interface IESLiveLiveCloseProfileParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL closeAll;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
