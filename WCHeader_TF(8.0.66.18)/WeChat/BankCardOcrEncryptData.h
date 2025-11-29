@class NSData, NSNumber;

@interface BankCardOcrEncryptData : NSObject

@property (copy, nonatomic) NSData *cipher_text;
@property (copy, nonatomic) NSData *tag;
@property (copy, nonatomic) NSData *iv;
@property (copy, nonatomic) NSData *aad;
@property (copy, nonatomic) NSNumber *key_seq;

- (void).cxx_destruct;

@end
