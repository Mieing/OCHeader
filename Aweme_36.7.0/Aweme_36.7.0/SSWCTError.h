@class NSString;

@interface SSWCTError : NSError

@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) NSString *message;

- (BOOL)isOK;
- (id)initWithCode:(unsigned long long)a0 level:(unsigned long long)a1 message:(id)a2 userInfo:(id)a3;
- (BOOL)isCorruption;
- (unsigned long long)extendedCode;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;
- (id)sql;
- (id)description;
- (id)initWithError:(const void *)a0;
- (long long)tag;
- (id)path;
- (id)stringForKey:(id)a0;

@end
