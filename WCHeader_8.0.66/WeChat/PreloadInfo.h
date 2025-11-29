@class NSString;

@interface PreloadInfo : NSObject

@property (nonatomic) unsigned int appUuid;
@property (nonatomic) unsigned long long engineId;
@property (retain, nonatomic) NSString *pkgPath;
@property (retain, nonatomic) NSString *signatureKey;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) BOOL keepAlive;

- (void).cxx_destruct;

@end
