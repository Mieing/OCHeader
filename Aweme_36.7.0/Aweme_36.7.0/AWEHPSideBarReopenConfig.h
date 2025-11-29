@class AWEHPSideBarReopenModel, UIViewController;
@protocol AWEHPSideBarSecondPageReopenProtocol;

@interface AWEHPSideBarReopenConfig : NSObject

@property (retain, nonatomic) AWEHPSideBarReopenModel *reopenModel;
@property (retain, nonatomic) UIViewController<AWEHPSideBarSecondPageReopenProtocol> *reopenSecondPage;

- (void).cxx_destruct;

@end
