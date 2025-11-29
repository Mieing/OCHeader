@class AWEDetailTrendHeadTitleModel, NSString, IESServiceProvider;

@interface AWEDetailTrendTitleSectionController : IGListSectionController <IGListDisplayDelegate>

@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) AWEDetailTrendHeadTitleModel *object;
@property (nonatomic) BOOL hasTrackedTagShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)commonTrackParams;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
