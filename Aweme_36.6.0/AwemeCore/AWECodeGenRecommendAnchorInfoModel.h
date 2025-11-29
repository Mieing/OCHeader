@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenRecommendAnchorInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *anchorPublishParam;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
