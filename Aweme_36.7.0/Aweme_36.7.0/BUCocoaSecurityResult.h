@class NSData, NSString;

@interface BUCocoaSecurityResult : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *utf8String;
@property (readonly, nonatomic) NSString *hex;
@property (readonly, nonatomic) NSString *hexLower;
@property (readonly, nonatomic) NSString *base64;

- (id)initWithBytes:(char *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;

@end
