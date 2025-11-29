@interface MMLiveSlottedTextFieldRange : UITextRange <NSCopying>

@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;
@property (readonly, nonatomic) long long length;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (id)rangeWithStartIndex:(long long)a0 endIndex:(long long)a1;
+ (id)rangeWithStartIndex:(long long)a0 length:(long long)a1;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)setWithStartIndex:(long long)a0 length:(long long)a1;
- (void)setWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEmpty;
- (id)start;
- (id)end;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
