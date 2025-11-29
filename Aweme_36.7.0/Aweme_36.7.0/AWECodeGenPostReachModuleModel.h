@class AWECodeGenBottomToolBarModel, AWECodeGenCoverTopLeftCornerModel;

@interface AWECodeGenPostReachModuleModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenCoverTopLeftCornerModel *coverTopLeftCornerModel;
@property (retain, nonatomic) AWECodeGenBottomToolBarModel *bottomToolBarModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void)dealloc;
- (void).cxx_destruct;

@end
