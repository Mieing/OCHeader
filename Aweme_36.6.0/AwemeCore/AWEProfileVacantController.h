@class AWEBinding, UIView, DUXVacantView, AWEUILoadingView, AWEProfileRichEmptyView, AWEProfileVacantConfig;
@protocol AWEProfileVacantDelegate;

@interface AWEProfileVacantController : NSObject

@property (retain, nonatomic) DUXVacantView *vacantView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEProfileRichEmptyView *richEmptyView;
@property (retain, nonatomic) AWEProfileVacantConfig *currentConfig;
@property (retain, nonatomic) AWEBinding *frameBind;
@property (weak, nonatomic) UIView *lastSuperView;
@property (weak, nonatomic) id<AWEProfileVacantDelegate> delegate;
@property (nonatomic) unsigned long long state;

- (void)reloadUI;
- (void)updateEmptyUI:(id)a0;
- (void)updateErrorUI:(id)a0;
- (id)currentViewWith:(unsigned long long)a0;
- (void)updateBind:(id)a0;
- (void)trackShown:(unsigned long long)a0;
- (id)defaultConfigWith:(unsigned long long)a0;
- (void)trackErrorClick:(unsigned long long)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)updateUIWithState:(unsigned long long)a0;

@end
