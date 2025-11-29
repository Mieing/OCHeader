@class UIView;
@protocol IESIMLoadingViewProtocol;

@interface IESIMLoadingViewConfig : NSObject

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *customLoadingView;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) id /* block */ customLoadingViewOnScreenBlock;

- (void).cxx_destruct;

@end
