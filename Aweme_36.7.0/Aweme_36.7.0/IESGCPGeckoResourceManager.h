@class NSString, NSArray;

@interface IESGCPGeckoResourceManager : NSObject

@property (retain, nonatomic) NSString *geckoSecretKey;
@property (retain, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSString *imageChannel;
@property (retain, nonatomic) NSString *scaleType;
@property (retain, nonatomic) NSArray *imageSuffixArray;

+ (id)sharedInstance;

- (void)registerGeckoAccessKey;
- (void)syncResourceWithIsCloundLaunch:(BOOL)a0;
- (void)reportGeckoSyncResultWithSuccess:(BOOL)a0 error:(id)a1;
- (id)geckoImageWithImageName:(id)a0;
- (id)geckoWebpImageWithWebpName:(id)a0;
- (void).cxx_destruct;

@end
