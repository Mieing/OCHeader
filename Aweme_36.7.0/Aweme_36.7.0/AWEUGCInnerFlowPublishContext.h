@class NSString, NSDictionary, AWEAwemeModel, UIViewController;
@protocol AWEAwemeNewDetailTableContainerProtocol;

@interface AWEUGCInnerFlowPublishContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (weak, nonatomic) UIViewController<AWEAwemeNewDetailTableContainerProtocol> *innerFlowTableDelegate;
@property (nonatomic) BOOL disableCopyLogParamsToSearchParams;

- (void).cxx_destruct;

@end
