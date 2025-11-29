@class NSString, NSArray, NSDictionary;

@interface BDAImageInfosModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *URI;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSArray *urlWithHeader;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long imageType;
@property (nonatomic) unsigned long long imageFileType;
@property (copy, nonatomic) NSString *openURL;

+ (BOOL)isImageInfosModel:(id)a0 equalesToModel:(id)a1;

- (id)initWithURLAndHeader:(id)a0 withWidth:(double)a1 withHeight:(double)a2 withURI:(id)a3 openURL:(id)a4;
- (id)initWithURL:(id)a0 withHeader:(id)a1 withWidth:(double)a2 withHeight:(double)a3 withURI:(id)a4;
- (id)initWithURL:(id)a0 withHeader:(id)a1;
- (id)urlStringAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
