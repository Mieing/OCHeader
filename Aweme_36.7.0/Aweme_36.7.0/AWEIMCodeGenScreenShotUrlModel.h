@class NSString;

@interface AWEIMCodeGenScreenShotUrlModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *uriSkey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
