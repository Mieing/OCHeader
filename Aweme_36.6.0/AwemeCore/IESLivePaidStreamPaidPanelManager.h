@class UIViewController, IESLiveRedirectSchemaParser, IESHYURLParserHandler;
@protocol IESHYControllerProtocol;

@interface IESLivePaidStreamPaidPanelManager : NSObject

@property (retain, nonatomic) IESLiveRedirectSchemaParser *redirectSchemaParser;
@property (retain, nonatomic) IESHYURLParserHandler *urlParserHandler;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *annieContainer;

- (void)openPaidPanelWithSchema:(id)a0 parameters:(id)a1 fromInside:(BOOL)a2 sceneID:(id)a3 businessID:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
