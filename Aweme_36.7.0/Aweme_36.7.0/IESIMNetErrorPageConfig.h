@class UIView;
@protocol IESIMEmptyPageConfigProtocol;

@interface IESIMNetErrorPageConfig : NSObject

@property (nonatomic) BOOL enableErrorOpt;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } errorPageEdgeInsets;
@property (retain, nonatomic) id<IESIMEmptyPageConfigProtocol> config;
@property (nonatomic) BOOL useVacantView;
@property (retain, nonatomic) UIView *customNetErrorView;
@property (copy, nonatomic) id /* block */ netErrorViewOnScreenBlock;

- (void).cxx_destruct;

@end
