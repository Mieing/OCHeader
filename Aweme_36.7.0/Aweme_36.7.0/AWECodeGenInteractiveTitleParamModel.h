@class NSString;

@interface AWECodeGenInteractiveTitleParamModel : AWEBaseDataModel

@property (nonatomic) int index;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL needTruncation;
@property (copy, nonatomic) NSString *secName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
