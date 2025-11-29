@class NSArray, NSString;

@interface AWEShareSchemaLiveCoverModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *avgColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
