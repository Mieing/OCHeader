@class NSDictionary, NSString, AWEDitoPOIFavoritePageContext;

@interface AWEDitoPOIFavoriteOrderFooterCellViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (retain, nonatomic) NSDictionary *itemModel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)trackEvent:(id)a0;
- (void)handleTap;

@end
