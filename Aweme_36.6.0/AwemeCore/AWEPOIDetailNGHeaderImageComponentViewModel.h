@class NSString, NSArray, AWEPOIDetailHeaderImageComponentBaseView;

@interface AWEPOIDetailNGHeaderImageComponentViewModel : DitoComponentViewModel

@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL showLynxView;
@property (nonatomic) BOOL showHeaderView;
@property (readonly, nonatomic) unsigned long long bizType;
@property (readonly, nonatomic) NSArray *imageURLList;
@property (readonly, nonatomic) double originImageHeight;
@property (weak, nonatomic) AWEPOIDetailHeaderImageComponentBaseView *componentView;

- (id)poiDetail;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didLoadPageModel:(id)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)handleClickEvent:(id)a0;
- (id)generalContext;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)initWithNode:(id)a0;

@end
