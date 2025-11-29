@interface BDXForestSSRParser : NSObject

@property (nonatomic) unsigned long long parseStatus;

+ (id)errorWithCode:(unsigned long long)a0 message:(id)a1;

- (unsigned char)readUint8:(id)a0 loc:(unsigned long long)a1 error:(id *)a2;
- (unsigned int)readUint32:(id)a0 loc:(unsigned long long)a1 error:(id *)a2;
- (id)init;

@end
