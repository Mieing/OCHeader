@class NSString, NSNumber, NSDictionary;

@interface IESLiveRequestShowDesktopGuideParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *passControlLevel;
@property (copy, nonatomic) NSString *guideStyleType;
@property (retain, nonatomic) NSNumber *needLoading;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL needFrequency;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
