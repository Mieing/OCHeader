@class AWEDetailCommerceDescriptionModel, NSString, IESServiceProvider, AWEDetailCommerceDescriptionView;
@protocol AWEDetailCommerceDescriptionViewConfiguration;

@interface AWEDetailCommerceDescriptionSectionController : IGListSectionController <AWEDetailCommerceDescriptionViewDelegate>

@property (retain, nonatomic) id<AWEDetailCommerceDescriptionViewConfiguration> configuration;
@property (retain, nonatomic) AWEDetailCommerceDescriptionModel *object;
@property (nonatomic) double descriptionContainerHeight;
@property (retain, nonatomic) AWEDetailCommerceDescriptionView *descriptionView;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)commerceDescriptionView:(id)a0 heightChangedTo:(double)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
