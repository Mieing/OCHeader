@class YYTextPosition;

@interface YYTextRange : UITextRange <NSCopying> {
    YYTextPosition *_start;
    YYTextPosition *_end;
}

@property (readonly, nonatomic) YYTextPosition *start;
@property (readonly, nonatomic) YYTextPosition *end;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;
+ (id)rangeWithStart:(id)a0 end:(id)a1;
+ (id)defaultRange;

- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
