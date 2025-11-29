@class NSString, NSNumber, NSDictionary;

@interface AWEIMUploadFileResultItem : IESIMBaseApiModel

@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *secrectKey;
@property (copy, nonatomic) NSString *md5;
@property (retain, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *algorithm;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
