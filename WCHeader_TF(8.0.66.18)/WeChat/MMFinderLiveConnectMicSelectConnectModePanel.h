@class MMFinderLiveConnectMicSelectConnectModeItemView;
@protocol MMFinderLiveConnectMicSelectConnectModeDelegate;

@interface MMFinderLiveConnectMicSelectConnectModePanel : MMPageSheetBaseView

@property (nonatomic) BOOL canAutoConnect;
@property (retain, nonatomic) MMFinderLiveConnectMicSelectConnectModeItemView *anchorConfirmItemView;
@property (retain, nonatomic) MMFinderLiveConnectMicSelectConnectModeItemView *autoConnectItemView;
@property (weak, nonatomic) id<MMFinderLiveConnectMicSelectConnectModeDelegate> actionDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canAutoConnect:(BOOL)a1;
- (void)configAllSubviews;
- (void)onTapAnchorConfirmItemView;
- (void)onTapAutoConnectItemView;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
