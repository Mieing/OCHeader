@class NSString, NSArray, IESIMCodeGenAwemeVideoModel, IESIMCodeGenAwemeUserModel;

@interface IESIMCodeGenAwemeItemModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) IESIMCodeGenAwemeUserModel *authorModel;
@property (retain, nonatomic) IESIMCodeGenAwemeVideoModel *videoModel;
@property (nonatomic) int awemeType;
@property (copy, nonatomic) NSArray *imageInfosModelArray;
@property (nonatomic) int externalVideoType;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
