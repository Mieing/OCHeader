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

@end
