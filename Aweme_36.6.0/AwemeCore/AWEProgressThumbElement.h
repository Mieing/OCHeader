@class AWEProgressThumbView, NSString, AWEProgressThumbPresenter, AWEPageContext, AWEProgressUIConfig;
@protocol AWEProgressElementDelegate, AWEProgressContextProtocol;

@interface AWEProgressThumbElement : AWEBaseElement <AWEProgressElementProtocol>

@property (retain, nonatomic) AWEProgressThumbView *thumbView;
@property (retain, nonatomic) AWEProgressThumbPresenter *presenter;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (id)initWithConfig:(id)a0 context:(id)a1;
- (void)viewDidDisposed;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)configuration;
- (void)reset;
- (void)viewDidLoad;

@end
