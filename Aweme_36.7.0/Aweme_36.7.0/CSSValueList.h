@class NSArray;

@interface CSSValueList : CSSValue

@property (retain, nonatomic) NSArray *internalArray;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (id)init;
- (id)item:(unsigned long long)a0;
- (void)setCssText:(id)a0;

@end
