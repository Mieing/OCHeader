@interface ZXCharacterSetECI : NSObject

@property (readonly, nonatomic) unsigned long long encoding;
@property (readonly, nonatomic) int value;

+ (void)addCharacterSet:(int)a0 encoding:(unsigned long long)a1;
+ (id)characterSetECIByValue:(int)a0;
+ (id)characterSetECIByEncoding:(unsigned long long)a0;
+ (void)initialize;

- (id)initWithValue:(int)a0 encoding:(unsigned long long)a1;

@end
