@class NSString, NSNumber;

@interface AWEVerifyParam : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSNumber *skipRecordVerify;
@property (copy, nonatomic) NSString *childrenCertToken;
@property (copy, nonatomic) NSNumber *youthCertScene;
@property (nonatomic) BOOL needChildrenCert;

- (void).cxx_destruct;

@end
