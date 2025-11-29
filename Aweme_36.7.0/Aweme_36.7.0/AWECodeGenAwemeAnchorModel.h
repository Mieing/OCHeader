@class AWECodeGenAwemeAnchorCustomizedDisplayModel, NSString, AWECodeGenUrlModel, NSDictionary, AWECodeGenAnchorStyleInfoModel;

@interface AWECodeGenAwemeAnchorModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *modelID;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *titleTag;
@property (retain, nonatomic) AWECodeGenAwemeAnchorCustomizedDisplayModel *displayInfoModel;
@property (copy, nonatomic) NSString *anchorMessage;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWECodeGenAnchorStyleInfoModel *styleInfoModel;
@property (copy, nonatomic) NSDictionary *marketingInfo;
@property (nonatomic) int subType;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *searchExtraInfo;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
