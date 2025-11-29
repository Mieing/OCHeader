@class NSString, NSArray;

@interface AWEIESMediaIDLCodeGenUrlTypeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlArray;
@property (nonatomic) int urlType;
@property (copy, nonatomic) NSString *md5;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
