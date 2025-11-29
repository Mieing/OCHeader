@class NSData, NSString;

@interface MemSig : NSObject <NSCoding>

@property (retain, nonatomic) NSData *sig;
@property (retain, nonatomic) NSData *sigKey;
@property (copy, nonatomic) NSString *sigName;
@property (nonatomic) unsigned int dwAppid;

- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
