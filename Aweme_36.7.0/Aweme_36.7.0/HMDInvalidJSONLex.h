@interface HMDInvalidJSONLex : NSObject

- (BOOL)readTrueTokenWithString:(id)a0 atIndex:(long long)a1;
- (BOOL)readFalseTokenWithString:(id)a0 atIndex:(long long)a1;
- (id)readAStringTokenWithString:(id)a0 atIndex:(long long)a1;
- (BOOL)isADigit:(char)a0;
- (id)readANumberTokenWithString:(id)a0 atIndex:(long long)a1;
- (id)tokensWithString:(id)a0;

@end
