@class NSString, NSArray;

@interface IESIMCodeGenUrlModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
