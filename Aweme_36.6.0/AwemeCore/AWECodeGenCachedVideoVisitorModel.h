@class NSString;

@interface AWECodeGenCachedVideoVisitorModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int sourceType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
