@interface ClickableRange : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } range;
    id /* block */ onClick;
}

- (id)initWithBlock:(id /* block */)a0 andRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
