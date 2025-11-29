@class NSString;

@interface BDPTTCode : NSObject

@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *aesIV;
@property (copy, nonatomic) NSString *ttcode;

- (void).cxx_destruct;

@end
