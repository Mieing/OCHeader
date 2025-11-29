@class AWEPOIDetailNGPageContext, NSString;

@interface AWEPOIDetailNGCOIHeaderComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (retain, nonatomic) NSString *title;

- (id)poiDetail;
- (id)componentReuseIdentifier;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewWillShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
