@class NSString, UIFont;

@interface AWEBatManUIAlertAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL showAlterViewAfterClicking;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 font:(id)a2 handler:(id /* block */)a3;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
