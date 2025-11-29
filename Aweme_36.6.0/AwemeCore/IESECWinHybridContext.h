@class IESECWinContext, UIViewController;

@interface IESECWinHybridContext : NSObject

@property (retain, nonatomic) IESECWinContext *winContext;
@property (weak, nonatomic) UIViewController *tabVC;
@property (weak, nonatomic) UIViewController *feedVC;

- (void).cxx_destruct;

@end
