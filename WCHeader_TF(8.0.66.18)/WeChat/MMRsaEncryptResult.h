@class NSString;

@interface MMRsaEncryptResult : NSObject

@property (readonly, nonatomic) NSString *base64Str;
@property (readonly, nonatomic) int ret;

+ (id)RsaEncryptResultWithBase64Str:(id)a0 ret:(int)a1;

- (id)initWithBase64Str:(id)a0 ret:(int)a1;
- (id)description;
- (void).cxx_destruct;

@end
