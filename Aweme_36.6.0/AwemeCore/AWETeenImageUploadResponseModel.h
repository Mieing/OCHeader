@class NSArray, NSString;

@interface AWETeenImageUploadResponseModel : AWEBaseApiModel

@property (readonly, copy, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *verifyType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
