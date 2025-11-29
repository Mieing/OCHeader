@class AWECodeGenAnchorEditAuthInfoModel;

@interface AWECodeGenAnchorEditAuthModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenAnchorEditAuthInfoModel *deleteAuthModel;
@property (retain, nonatomic) AWECodeGenAnchorEditAuthInfoModel *recoverAuthModel;
@property (retain, nonatomic) AWECodeGenAnchorEditAuthInfoModel *addAuthModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
