@class UIViewController;
@protocol AWESharePanelAdapter;

@interface AWESharePanelListIMContainerCell : AWESharePanelListContainerCell

@property (retain, nonatomic) UIViewController<AWESharePanelAdapter> *childVC;

- (void).cxx_destruct;

@end
