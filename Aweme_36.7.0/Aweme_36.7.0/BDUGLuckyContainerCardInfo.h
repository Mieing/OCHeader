@class NSDictionary, UIViewController;
@protocol BDXPageContainerProtocol;

@interface BDUGLuckyContainerCardInfo : NSObject

@property (weak, nonatomic) UIViewController<BDXPageContainerProtocol> *cardVC;
@property (retain, nonatomic) UIViewController<BDXPageContainerProtocol> *cardVCStrong;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ shownHandler;
@property (nonatomic) BOOL shown;

- (id)initWithCardVC:(id)a0 params:(id)a1 shownHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
