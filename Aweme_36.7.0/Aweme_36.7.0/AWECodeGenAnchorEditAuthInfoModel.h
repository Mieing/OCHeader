@class NSString;

@interface AWECodeGenAnchorEditAuthInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL isEnable;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
