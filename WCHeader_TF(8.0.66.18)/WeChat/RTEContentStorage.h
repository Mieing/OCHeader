@class NSMutableString, NSMutableArray;

@interface RTEContentStorage : MMObject <NSCopying>

@property (readonly, nonatomic) NSMutableString *textContent;
@property (readonly, nonatomic) NSMutableArray *attributes;

- (id)initWithText:(id)a0 attributes:(id)a1;
- (id)description;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)checkRangeValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateCacheToIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfAttribute:(id)a0;
- (id)getAttributeListOfType:(unsigned int)a0;
- (id)getAttributeOfType:(unsigned int)a0 atLocation:(unsigned long long)a1;
- (BOOL)findAttributeInList:(unsigned int)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withMatcher:(id /* block */)a2;
- (void)enumerateAttribute:(unsigned int)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isBackward:(BOOL)a2 usingBlock:(id /* block */)a3;
- (unsigned long long)minimumIdenticalAttributeIntervalLengthSinceIndex:(unsigned long long)a0;
- (void)deleteCententAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAttribute:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyContentStorageAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertContent:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendContentAndClear:(id)a0;
- (void)insertText:(id)a0 atIndex:(unsigned long long)a1;
- (id)buildAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isAttribute:(id)a0 extendableAtIndex:(unsigned long long)a1 isPreNode:(BOOL)a2;
- (void).cxx_destruct;

@end
