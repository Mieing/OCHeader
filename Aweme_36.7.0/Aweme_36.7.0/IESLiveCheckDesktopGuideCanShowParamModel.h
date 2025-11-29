@class NSString;

@interface IESLiveCheckDesktopGuideCanShowParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *passControlLevel;
@property (copy, nonatomic) NSString *guideStyleType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
