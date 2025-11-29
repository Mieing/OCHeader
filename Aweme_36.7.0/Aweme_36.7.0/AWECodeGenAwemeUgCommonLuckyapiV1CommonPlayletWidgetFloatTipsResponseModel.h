@class NSString, AWECodeGenFloatTipsDataModel;

@interface AWECodeGenAwemeUgCommonLuckyapiV1CommonPlayletWidgetFloatTipsResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenFloatTipsDataModel *dataModel;
@property (nonatomic) int errNo;
@property (copy, nonatomic) NSString *errTips;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
