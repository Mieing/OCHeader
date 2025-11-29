@class NSString;

@interface QBWupEncryptKey : NSObject

@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *qbKey;
@property (retain, nonatomic) NSString *token;

- (id)init;
- (void).cxx_destruct;

@end
