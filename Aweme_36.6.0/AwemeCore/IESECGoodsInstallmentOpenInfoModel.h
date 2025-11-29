@class NSString;

@interface IESECGoodsInstallmentOpenInfoModel : IESECBaseApiModel

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *iconUrlStr;
@property (copy, nonatomic) NSString *openDesc;
@property (copy, nonatomic) NSString *openHint;
@property (copy, nonatomic) NSString *openUrlStr;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *activityType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
