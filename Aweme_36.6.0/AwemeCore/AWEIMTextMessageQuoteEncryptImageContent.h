@class NSArray, NSString, NSDictionary;

@interface AWEIMTextMessageQuoteEncryptImageContent : NSObject

@property (nonatomic) unsigned long long aweType;
@property (copy, nonatomic) NSArray *checkPics;
@property (copy, nonatomic) NSArray *checkTexts;
@property (copy, nonatomic) NSString *clientKey;
@property (nonatomic) unsigned long long coverHeight;
@property (nonatomic) unsigned long long coverWidth;
@property (nonatomic) unsigned long long fromGallery;
@property (nonatomic) unsigned long long massMsg;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *packageName;
@property (nonatomic) unsigned long long postType;
@property (copy, nonatomic) NSString *resourceMd5;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSDictionary *sourceIcon;
@property (copy, nonatomic) NSString *sourceTittle;
@property (nonatomic) unsigned long long itemId;

- (id)initWithContentDict:(id)a0;
- (BOOL)im_isUnavaliable;
- (void).cxx_destruct;

@end
