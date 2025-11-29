@class NSString, NSArray;

@interface AWECodeGenBaseNoticeConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int selectValue;
@property (copy, nonatomic) NSArray *optionArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
