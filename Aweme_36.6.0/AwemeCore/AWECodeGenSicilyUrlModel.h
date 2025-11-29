@class NSString, NSArray;

@interface AWECodeGenSicilyUrlModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlArray;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) long long dataSize;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (copy, nonatomic) NSString *lightCoverColor;
@property (copy, nonatomic) NSString *darkCoverColor;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSArray *downloadUrlArray;
@property (copy, nonatomic) NSString *key;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
