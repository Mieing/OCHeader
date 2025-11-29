@class NSString;

@interface WCUrl : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long enckey;
@property (nonatomic) int encIdx;
@property (retain, nonatomic) NSString *encryptKey;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *videomd5;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long fileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_videomd5;
+ (void)PBArrayAdd_encryptKey;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_fileSize;
+ (void)initialize;
+ (id)UrlWithUrl:(id)a0 type:(long long)a1;
+ (id)UrlWithCdnUrlInfo:(id)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
