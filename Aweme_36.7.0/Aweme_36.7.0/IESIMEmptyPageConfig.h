@class UIView;
@protocol IESIMEmptyPageConfigProtocol;

@interface IESIMEmptyPageConfig : NSObject

@property (nonatomic) BOOL needHideAllOtherComponent;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } emptyPageEdgeInsets;
@property (retain, nonatomic) id<IESIMEmptyPageConfigProtocol> config;
@property (nonatomic) BOOL needCalculateExtraCellHeight;
@property (retain, nonatomic) UIView *customEmptyView;
@property (copy, nonatomic) id /* block */ customEmptyViewOnScreenBlock;

- (void).cxx_destruct;

@end
