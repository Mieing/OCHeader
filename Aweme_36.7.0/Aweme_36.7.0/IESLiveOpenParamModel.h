@class NSString, NSDictionary;

@interface IESLiveOpenParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL replace;
@property (copy, nonatomic) NSString *replaceType;
@property (copy, nonatomic) NSDictionary *initialProps;
@property (nonatomic) BOOL useSysBrowser;
@property (nonatomic) BOOL enableLandscape;
@property (copy, nonatomic) NSString *orientation;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
