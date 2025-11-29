@class NSString, NSArray;

@interface AWEIMCodeGenFileMetaModel : AWEBaseDataModel

@property (nonatomic) int fileStatus;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlArray;
@property (nonatomic) long long urlExpireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
