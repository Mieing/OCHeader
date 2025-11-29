@class NSDictionary, NSString, NSNumber;

@interface IESLiveCheckDesktopGuideCanShowDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) NSDictionary *outputParams;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSNumber *errorCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
