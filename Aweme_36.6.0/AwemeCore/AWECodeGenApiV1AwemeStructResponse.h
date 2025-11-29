@class AWECodeGenAwemeModel;

@interface AWECodeGenApiV1AwemeStructResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenAwemeModel *awemeV2Model;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeV1Model;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeLiteModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
