@class BDSCViewModel, BDSCViewModelConfig;
@protocol AWEScreenCastControlViewInteractiveDelegate, AWEScreenCastVideoDelegate;

@interface AWEScreenCastControlViewConfig : NSObject

@property (retain, nonatomic) BDSCViewModel *viewModel;
@property (retain, nonatomic) BDSCViewModelConfig *viewModelConfig;
@property (weak, nonatomic) id<AWEScreenCastControlViewInteractiveDelegate> interactiveDelegate;
@property (weak, nonatomic) id<AWEScreenCastVideoDelegate> videoDelegate;

- (void).cxx_destruct;

@end
