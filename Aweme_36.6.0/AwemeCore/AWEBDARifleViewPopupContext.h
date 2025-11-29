@class AWEOriginalAdModel, AWEAwemeModel;
@protocol AWEBDARifleViewPopupEventProtocol, AWEPlayInteractionPadSplitScreenProtocol, AWEBDARifleViewConfiguration, AWEBDARifleViewDelegate;

@interface AWEBDARifleViewPopupContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) id<AWEBDARifleViewConfiguration> config;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> lifecycleDelegate;
@property (weak, nonatomic) id<AWEBDARifleViewPopupEventProtocol> popupEventDelegate;
@property (weak, nonatomic) id<AWEPlayInteractionPadSplitScreenProtocol> splitController;
@property (nonatomic) BOOL isFromFeedAnchor;

- (void).cxx_destruct;

@end
