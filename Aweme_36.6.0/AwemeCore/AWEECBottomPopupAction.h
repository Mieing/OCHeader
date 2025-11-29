@class NSString;

@interface AWEECBottomPopupAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL showAfterClicked;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
