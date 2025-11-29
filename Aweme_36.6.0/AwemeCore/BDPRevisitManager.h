@class NSString;

@interface BDPRevisitManager : NSObject

@property (nonatomic) double expireTimeLimit;
@property (retain, nonatomic) NSString *cacheFileFolder;
@property (retain, nonatomic) NSString *cacheFileName;

+ (id)sharedInstance;

- (void)processRevisitWithSchema:(id)a0 dst:(id)a1;
- (id)processWithData:(id)a0 dst:(id)a1 appId:(id)a2 scene:(id)a3;
- (void)checkExpireAndRemoveFromDictionary:(id)a0 expireTime:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
