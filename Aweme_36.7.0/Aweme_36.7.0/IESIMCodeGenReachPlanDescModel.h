@class NSString;

@interface IESIMCodeGenReachPlanDescModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (nonatomic) BOOL isOpen;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *lightIconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
