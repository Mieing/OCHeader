@class NSString, NSArray;

@interface AWENewURLModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSArray *originURLList;
@property (nonatomic) int imageWidth;
@property (nonatomic) int imageHeight;
@property (copy, nonatomic) NSString *URLKey;
@property (nonatomic) long long sizeByte;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (copy, nonatomic) NSString *lightCoverColor;
@property (copy, nonatomic) NSString *darkCoverColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
