@class AWEPageContext, AWEAwemeModel;
@protocol AWEAwemeDetailNaviBarCommonContextProtocol;

@interface AWEAwemeDetailNaviBarBaseElement : AWEBaseElement

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWEAwemeDetailNaviBarCommonContextProtocol> *context;

- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)appear;

@end
