@class NSString;

@interface WAInputEncrypter : NSObject

@property (retain, nonatomic) NSString *certPem;
@property (retain, nonatomic) NSString *encryptExtra;

- (void)sendError:(id *)a0 err:(id)a1;
- (id)encryptPlainString:(id)a0 encryptError:(id *)a1;
- (void).cxx_destruct;

@end
