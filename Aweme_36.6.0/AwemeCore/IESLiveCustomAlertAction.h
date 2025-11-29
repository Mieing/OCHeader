@class NSString, UIColor;

@interface IESLiveCustomAlertAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)actionWithTitle:(id)a0 textColor:(id)a1 actionBlock:(id /* block */)a2;

- (void).cxx_destruct;

@end
