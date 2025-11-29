@class NSURL, NSString, NSArray;

@interface BDPClientAIRegulusModel : NSObject

@property (retain, nonatomic) NSURL *pkgSrcURL;
@property (retain, nonatomic) NSString *ruleName;
@property (retain, nonatomic) NSString *ruleId;
@property (retain, nonatomic) NSString *ruleVersion;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSArray *pkgSrc;
@property (retain, nonatomic) NSArray *loadTimes;
@property (retain, nonatomic) NSString *downloadPath;
@property (nonatomic) unsigned long long fromType;

- (id)initWithDictionary:(id)a0 ruleName:(id)a1;
- (BOOL)checkParamsValid;
- (BOOL)containLoadTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
