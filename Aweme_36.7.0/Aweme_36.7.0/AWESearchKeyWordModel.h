@class NSString;

@interface AWESearchKeyWordModel : NSString

@property (retain, nonatomic) NSString *mainWord;
@property (retain, nonatomic) NSString *gsWord;
@property (readonly, nonatomic) NSString *unionWord;

- (id)initWithKeyWordString:(id)a0 toBeCut:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
