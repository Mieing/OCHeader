@class NSMutableDictionary;

@interface BDRAttributedMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;

- (void)removeAllAttributes;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getRangeWithAttribute:(id)a0 value:(id)a1;
- (id)getAllValueWithAttribute:(id)a0;
- (void)removeValue:(id)a0 attribute:(id)a1;
- (void)removeAllValueWithAttribute:(id)a0;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)init;

@end
