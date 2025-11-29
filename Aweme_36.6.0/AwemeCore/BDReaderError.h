@class NSString;

@interface BDReaderError : NSError

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, copy, nonatomic) NSString *message;

+ (id)errorWithReason:(unsigned long long)a0 message:(id)a1;

- (id)initWithReason:(unsigned long long)a0 message:(id)a1;
- (void).cxx_destruct;

@end
