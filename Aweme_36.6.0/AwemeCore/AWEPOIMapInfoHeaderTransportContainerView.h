@class NSDictionary, NSArray, AWEPOIMapContext;

@interface AWEPOIMapInfoHeaderTransportContainerView : UIView

@property (copy, nonatomic) NSDictionary *itemsViewMap;
@property (copy, nonatomic) NSArray *typeOrderArray;
@property (retain, nonatomic) AWEPOIMapContext *context;

- (void)bindActionAndState;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (double)containerHeight;
- (id)keyForType:(long long)a0;

@end
