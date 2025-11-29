@class NSString;

@interface FlutterError : NSObject

@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) id details;

+ (id)errorWithCode:(id)a0 message:(id)a1 details:(id)a2;

- (id)initWithCode:(id)a0 message:(id)a1 details:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
