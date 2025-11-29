@class DVEVCContext, NSArray, DVETransitionPanelViewModel;
@protocol DVETransitionEffectBundleTrackDelegate, DVETransitionEffectBundleContextProtocol;

@interface DVETransitionEffectBundleViewModel : NSObject

@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) DVETransitionPanelViewModel *viewModel;
@property (weak, nonatomic) id<DVETransitionEffectBundleTrackDelegate> trackDelegate;
@property (weak, nonatomic) id<DVETransitionEffectBundleContextProtocol> context;

- (id)initWithVCContext:(id)a0;
- (void)loadTransitionEffectBundleData;
- (void)buildPanelViewModelData;
- (void)downloadBundleWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
