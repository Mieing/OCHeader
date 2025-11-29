@class IESECOrderListTabView, NSArray, NSString;

@interface IESECSliceXOrderListTabbarView : IESECSliceXViewElementView <IESECOrderListTabViewDelegate>

@property (retain, nonatomic) IESECOrderListTabView *tabView;
@property (retain, nonatomic) NSArray *tabList;
@property (retain, nonatomic) NSArray *oldTabInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
