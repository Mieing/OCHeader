@class AWECodeGenServiceAccountModel, NSString;

@interface AWECodeGenCommonSubscribePopStModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenServiceAccountModel *serviceAccountModel;
@property (copy, nonatomic) NSString *popScene;
@property (nonatomic) long long popType;
@property (copy, nonatomic) NSString *textAfterSub;
@property (copy, nonatomic) NSString *iconUrlAfterSub;
@property (copy, nonatomic) NSString *textAfterUnsub;
@property (copy, nonatomic) NSString *bigTextAfterSub;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
