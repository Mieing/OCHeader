@class NSString, AWECodeGenAnchorTextStyleModel, AWECodeGenAnchorTextInfoExtendModel, AWECodeGenAnchorTextBackGroundModel, AWECodeGenAnchorPreSeparatorModel;

@interface AWECodeGenAnchorTextInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWECodeGenAnchorTextStyleModel *textStyleModel;
@property (retain, nonatomic) AWECodeGenAnchorTextBackGroundModel *backGroundModel;
@property (retain, nonatomic) AWECodeGenAnchorPreSeparatorModel *preSeparatorModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoExtendModel *extendModel;
@property (nonatomic) BOOL feedChange;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
