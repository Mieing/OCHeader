@class NSString, NSData;

@interface GetA8KeyLitePrefetchResInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *manifestUrl;
@property (retain, nonatomic) NSString *referDomain;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSData *hashId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSData *businessData;

+ (void)initialize;

- (void)setBusinessData:(id)a0;
- (id)businessData;
- (void)setUserName:(id)a0;
- (id)userName;
- (void)setAppId:(id)a0;
- (id)appId;
- (void)setHashId:(id)a0;
- (id)hashId;
- (void)setOpType:(unsigned int)a0;
- (unsigned int)opType;
- (void)setReferDomain:(id)a0;
- (id)referDomain;
- (void)setManifestUrl:(id)a0;
- (id)manifestUrl;
- (void)setPath:(id)a0;
- (id)path;

@end
