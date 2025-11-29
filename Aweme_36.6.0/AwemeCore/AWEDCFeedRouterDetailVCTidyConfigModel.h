@class UIViewController, AWEListDataController, AWEAwemeModel;
@protocol AWEAwemeDetailTableViewControllerProtocol, AWEDCFeedTidyModelInnerDataControllerProtocol;

@interface AWEDCFeedRouterDetailVCTidyConfigModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEListDataController *innerDataController;
@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *controller;
@property (nonatomic) BOOL isSameDataController;
@property (retain, nonatomic) id<AWEDCFeedTidyModelInnerDataControllerProtocol> tidyDataController;

- (void).cxx_destruct;

@end
