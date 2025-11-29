@class YYTextPosition;

@interface YYTextRange : UITextRange <NSCopying> {
    YYTextPosition *_start;
    YYTextPosition *_end;
}

@property (readonly, nonatomic) YYTextPosition *start;
@property (readonly, nonatomic) YYTextPosition *end;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)rangeWithStart:(id)a0 end:(id)a1;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;
+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
