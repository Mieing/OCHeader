@interface WCTError : NSError

@property (readonly, nonatomic) int type;

+ (id)errorWithWCDBError:(const void *)a0;

- (id)initWithWCDBError:(const void *)a0;
- (id)initWithType:(int)a0 code:(long long)a1 userInfo:(id)a2;
- (BOOL)isOK;
- (id)infoForKey:(int)a0;
- (BOOL)studio_isCorrupted;
- (id)description;

@end
