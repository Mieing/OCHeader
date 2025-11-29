@class NSString;

@interface AWECodeGenBaseInteractiveNoticeActionModel : AWEBaseDataModel

@property (nonatomic) int actionType;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
