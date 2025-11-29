@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenNotLoginModuleModel : AWEBaseDataModel

@property (nonatomic) BOOL guideLoginTipExist;
@property (nonatomic) int guideLoginTipStyle;
@property (retain, nonatomic) AWECodeGenUrlModel *guideLoginTipCoverUrlModel;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
