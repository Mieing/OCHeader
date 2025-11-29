@class AWECodeGenUrlModel;

@interface AWECodeGenWaterMarkInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (nonatomic) long long position;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
