@class NSString;

@interface WCTError : NSError

@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) NSString *message;

- (unsigned long long)extendedCode;
- (id)sql;
- (long long)tag;
- (id)path;
- (id)initWithCode:(unsigned long long)a0 level:(unsigned long long)a1 message:(id)a2 userInfo:(id)a3;
- (id)initWithError:(const void *)a0;
- (BOOL)isOK;
- (BOOL)isCorruption;
- (id)stringForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
