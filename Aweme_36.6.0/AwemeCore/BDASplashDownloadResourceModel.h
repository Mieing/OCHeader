@class NSArray, NSString;

@interface BDASplashDownloadResourceModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *urlArray;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double expiresTime;
@property (nonatomic) BOOL netAllow;
@property (copy, nonatomic) NSString *shaderColor;
@property (nonatomic) long long resourcePriority;

- (id)initWithVideoInfo:(id)a0;
- (id)getImageUrlArrayWithUrlList:(id)a0;
- (id)getVideoUrlArrayWithUrlList:(id)a0;
- (id)initWithImageInfo:(id)a0;
- (id)initWithOriginalImageInfo:(id)a0;
- (id)initWithBinaryInfo:(id)a0;
- (id)initWithAlphaVideoInfo:(id)a0;
- (id)initWithCommonInfo:(id)a0;
- (void).cxx_destruct;

@end
