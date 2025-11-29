@class UIView;
@protocol BDECRabbiFlyIErrorView, BDECRabbiFlyILoadingView;

@interface BDECRabbiFlyViewConfig : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginFrame;
@property (retain, nonatomic) UIView<BDECRabbiFlyILoadingView> *loadingView;
@property (retain, nonatomic) UIView<BDECRabbiFlyIErrorView> *errorView;
@property (copy, nonatomic) id /* block */ onLoadError;
@property (copy, nonatomic) id /* block */ onDidBindCardData;

- (void).cxx_destruct;

@end
