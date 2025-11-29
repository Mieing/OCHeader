@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenActionResponseModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUriModel;
@property (retain, nonatomic) AWECodeGenUrlModel *lightImageUriModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
