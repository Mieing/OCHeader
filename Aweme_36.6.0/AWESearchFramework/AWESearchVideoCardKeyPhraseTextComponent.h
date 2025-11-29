@class NSString, AWEGeneralSearchVideoCardModel, AWEAwemeModel, UIView, AWESearchVideoCardBottomTextView;

@interface AWESearchVideoCardKeyPhraseTextComponent : AWESearchComponent <AWESearchVideoCardKeyPhraseTextComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchVideoCardBottomTextView *bottomTextView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })calculateSizeWithModel:(id)a0 Width:(double)a1;

- (id)playerProvider;
- (void)clickTimestamp;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (id)broadcastProtocolList;
- (void)setModelOnly:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end
