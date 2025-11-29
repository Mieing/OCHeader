@class UIView;

@interface WXMASViewAttribute : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, weak, nonatomic) id item;
@property (readonly, nonatomic) long long layoutAttribute;

- (id)initWithView:(id)a0 layoutAttribute:(long long)a1;
- (id)initWithView:(id)a0 item:(id)a1 layoutAttribute:(long long)a2;
- (BOOL)isSizeAttribute;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
