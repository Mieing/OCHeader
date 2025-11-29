@class NSString;

@interface AWEIESMediaCodeGenLocationModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *asciName;
@property (copy, nonatomic) NSString *localId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
