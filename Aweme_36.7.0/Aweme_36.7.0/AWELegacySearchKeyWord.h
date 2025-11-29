@class NSString;

@interface AWELegacySearchKeyWord : NSString

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *errorWord;

+ (id)stringWithKeyword:(id)a0 errorWord:(id)a1;

- (BOOL)isEqualToString:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
