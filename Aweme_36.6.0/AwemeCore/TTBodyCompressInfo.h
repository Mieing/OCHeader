@class NSString;

@interface TTBodyCompressInfo : NSObject

@property (nonatomic) int failCode;
@property (nonatomic) unsigned long long beforeSize;
@property (nonatomic) unsigned long long afterSize;
@property (nonatomic) BOOL compressOptEnabled;
@property (nonatomic) char type;
@property (copy, nonatomic) NSString *failedPrefixData;
@property (copy, nonatomic) NSString *encoding;

+ (char)isValidPrefixData:(id)a0 type:(char)a1 prefix:(id *)a2;

- (BOOL)isCompressBodyValid:(id)a0;
- (id)constructCompressLog:(unsigned int)a0 beforeSize:(unsigned long long)a1 afterSize:(unsigned long long)a2;
- (id)initWithBodyCompressInfo:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
