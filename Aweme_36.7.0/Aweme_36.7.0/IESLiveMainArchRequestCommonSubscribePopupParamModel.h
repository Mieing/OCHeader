@class NSString, NSNumber;

@interface IESLiveMainArchRequestCommonSubscribePopupParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *popId;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *themeMode;
@property (copy, nonatomic) NSString *mobParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
