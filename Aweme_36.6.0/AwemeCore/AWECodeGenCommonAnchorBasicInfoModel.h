@class AWECodeGenAnchorAnimationModel, NSString, AWECodeGenAnchorActionModel, AWECodeGenAnchorContainerModel, AWECodeGenAnchorDisplayStrategyModel, AWECodeGenAnchorIconInfoModel, AWECodeGenAnchorTextInfoModel;

@interface AWECodeGenCommonAnchorBasicInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *modelID;
@property (retain, nonatomic) AWECodeGenAnchorIconInfoModel *iconModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *titleModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *descModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *subDescModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *suffixModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *funcDescModel;
@property (retain, nonatomic) AWECodeGenAnchorAnimationModel *animationModel;
@property (retain, nonatomic) AWECodeGenAnchorActionModel *actionModel;
@property (retain, nonatomic) AWECodeGenAnchorContainerModel *containerModel;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *tracerInfo;
@property (nonatomic) int type;
@property (retain, nonatomic) AWECodeGenAnchorDisplayStrategyModel *displayStrategyModel;
@property (nonatomic) int subType;
@property (copy, nonatomic) NSString *scene;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
