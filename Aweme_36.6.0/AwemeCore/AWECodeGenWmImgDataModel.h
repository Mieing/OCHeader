@class NSString;

@interface AWECodeGenWmImgDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isGray;
@property (nonatomic) long long expireAt;
@property (copy, nonatomic) NSString *comBkLink;
@property (copy, nonatomic) NSString *comBkAlgorithm;
@property (copy, nonatomic) NSString *comBkVersion;
@property (nonatomic) long long comBkExpireAt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
