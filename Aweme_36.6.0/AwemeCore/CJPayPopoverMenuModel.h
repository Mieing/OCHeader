@class NSString;

@interface CJPayPopoverMenuModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) long long titleTextAlignment;
@property (nonatomic) BOOL disable;

+ (id)actionWithTitle:(id)a0 titleTextAlignment:(long long)a1 block:(id /* block */)a2;

- (void).cxx_destruct;

@end
