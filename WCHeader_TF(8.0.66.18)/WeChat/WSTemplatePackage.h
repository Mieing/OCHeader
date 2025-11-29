@class NSString, NSDictionary;

@interface WSTemplatePackage : NSObject

@property (copy, nonatomic) NSString *folderPath;
@property (copy, nonatomic) NSString *pakageName;
@property (retain, nonatomic) NSDictionary *configDic;
@property (retain, nonatomic) NSDictionary *customDataDic;
@property (retain, nonatomic) NSDictionary *md5map;
@property (retain, nonatomic) NSDictionary *sha1Map;
@property (readonly, copy, nonatomic) NSString *htmlPath;
@property (readonly, nonatomic) unsigned int version;

+ (id)makeDictionaryFromFileInPath:(id)a0;
+ (unsigned long long)verifyTemplateContentStatusForPath:(id)a0 bizType:(unsigned long long)a1;
+ (BOOL)verifyMD5ForTemplateFiles:(id)a0 withMD5Map:(id)a1 bizType:(unsigned long long)a2;
+ (BOOL)VerifySHA1ForFiles:(id)a0 withSHA1Map:(id)a1 bizType:(unsigned long long)a2;
+ (id)VerifyTextForBizType:(unsigned long long)a0;
+ (BOOL)MustCheckFileDigest:(unsigned long long)a0;

- (id)initWithPackagePath:(id)a0 packageName:(id)a1;
- (void)reloadConfig;
- (void)removeFile;
- (BOOL)isValid;
- (BOOL)fileExist;
- (id)description;
- (void).cxx_destruct;

@end
