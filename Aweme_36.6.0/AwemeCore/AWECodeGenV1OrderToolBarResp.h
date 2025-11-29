@class NSString, AWECodeGenOrderToolBarDataModel;

@interface AWECodeGenV1OrderToolBarResp : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenOrderToolBarDataModel *dataModel;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
