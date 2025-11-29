@class NSDictionary, NSMutableDictionary, UILabel;

@interface IESLiveStreamPlayerLayoutDynamic : IESLiveStreamPlayerLayoutBase

@property (copy, nonatomic) NSDictionary *configMap;
@property (retain, nonatomic) NSMutableDictionary *calculatorMap;
@property (retain, nonatomic) id observer;
@property (nonatomic) BOOL enableDynamicLayout;
@property (nonatomic) long long preDynamicLayoutKey;
@property (weak, nonatomic) UILabel *tipLabel;

- (BOOL)layoutWithMetaInfo:(id)a0;
- (void)showDebugInfoIfNeed;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)initWithPlayer:(id)a0 layoutMachine:(id)a1;
- (id)rawPlayer;
- (void)removeDebugInfoIfNeeded;
- (BOOL)handleSEI:(id)a0;
- (void)transformConfigMap;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (void)dealloc;

@end
