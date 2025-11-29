@class NSString;

@interface ReddotVerifyInfo : NSObject

@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *timestamp;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;

@end
