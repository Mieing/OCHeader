@class NSString;

@interface AWECodeGenTempleteReturnModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
