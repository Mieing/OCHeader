@class UIView;

@interface MASViewAttribute : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, weak, nonatomic) id item;
@property (readonly, nonatomic) long long layoutAttribute;

- (id)initWithView:(id)a0 item:(id)a1 layoutAttribute:(long long)a2;
- (id)initWithView:(id)a0 layoutAttribute:(long long)a1;
- (BOOL)isSizeAttribute;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
