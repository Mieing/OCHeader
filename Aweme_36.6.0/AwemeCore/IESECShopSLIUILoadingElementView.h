@class UIView;
@protocol IESECUILoadingViewProtocol;

@interface IESECShopSLIUILoadingElementView : IESECSliceXBaseContentElementView {
    UIView<IESECUILoadingViewProtocol> *_loadingView;
}

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
