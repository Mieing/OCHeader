@interface FlutterTextRange : UITextRange <NSCopying>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)rangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)initWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)start;
- (id)end;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualTo:(id)a0;

@end
