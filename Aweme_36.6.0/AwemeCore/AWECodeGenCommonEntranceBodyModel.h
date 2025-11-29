@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenCommonEntranceBodyModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWECodeGenUrlModel *iconUrlModel;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) int entranceType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
