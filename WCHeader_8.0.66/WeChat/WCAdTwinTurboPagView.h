@class WCAdPagInfo, WCAdPagViewConfig, WCAdRepeatLimitedPagView;

@interface WCAdTwinTurboPagView : MMUIView

@property (retain, nonatomic) WCAdPagInfo *pagInfo;
@property (retain, nonatomic) WCAdPagInfo *pagDarkInfo;
@property (retain, nonatomic) WCAdPagViewConfig *config;
@property (retain, nonatomic) WCAdRepeatLimitedPagView *pagView;
@property (retain, nonatomic) WCAdRepeatLimitedPagView *pagDarkView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pagInfo:(id)a1 pagDarkInfo:(id)a2 config:(id)a3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)stop;
- (void)preloadPagComposition;
- (void)preloadPagCompositionFor:(id)a0;
- (void)updateSubviewsVisibility;
- (void)resumePagViewPlayState;
- (id)fetchPreferPAGView;
- (id)fetchOppositePAGViewAgainst:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
