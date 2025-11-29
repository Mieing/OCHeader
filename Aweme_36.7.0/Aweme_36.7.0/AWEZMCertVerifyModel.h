@class NSString, NSNumber, NSDictionary;

@interface AWEZMCertVerifyModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *bizNO;
@property (copy, nonatomic) NSNumber *skipRecordVerify;
@property (copy, nonatomic) NSDictionary *zhimaTrackParams;
@property (nonatomic) BOOL needChildrenCert;
@property (copy, nonatomic) NSString *childrenCertToken;
@property (copy, nonatomic) NSNumber *youthCertScene;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
