@class NSString;

@interface AWEWebcastCodeGenUpdTagResponseDataModel : AWEBaseDataModel

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *msg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
