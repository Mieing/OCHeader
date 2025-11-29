@class NSString, IESECGoodsDetailPopupControl;

@interface IESECGoodsDetailPageLogicalControl : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL gulEnabled;
@property (nonatomic) BOOL detailControl;
@property (nonatomic) BOOL shopRecommendEnabled;
@property (nonatomic) BOOL longConnectionEnabled;
@property (nonatomic) BOOL fullPanelOneStepCloseGestureOptimize;
@property (retain, nonatomic) IESECGoodsDetailPopupControl *popupWhenClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
