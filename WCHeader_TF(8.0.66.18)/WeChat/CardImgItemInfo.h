@class NSString;

@interface CardImgItemInfo : NSObject <PBCoding, NSCoding>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned int midSize;
@property (nonatomic) unsigned int thumbSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_aeskey;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_midSize;
+ (void)PBArrayAdd_thumbSize;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkIsValid;
- (id)getCardImageItemFileIdOrUrl;
- (void).cxx_destruct;

@end
