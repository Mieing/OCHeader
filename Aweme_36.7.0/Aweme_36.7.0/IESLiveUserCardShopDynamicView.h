@class DSLDetail, NSString, IESLiveUserCardStore, UIView;

@interface IESLiveUserCardShopDynamicView : UIView <IESLiveDynamicViewDelegate, IESLiveRecycleItem>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) DSLDetail *dsl;
@property (retain, nonatomic) UIView *shopView;
@property (nonatomic) BOOL loadSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *recycleItemType;

- (void)triggerSliceXEvent:(id)a0;
- (void)viewDidFinishLoad;
- (void)viewDidLoadFailedWithError:(id)a0;
- (id)initWithStore:(id)a0 diContext:(id)a1;
- (void)updateWithStore:(id)a0;
- (id)buildCustomData;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setup;

@end
