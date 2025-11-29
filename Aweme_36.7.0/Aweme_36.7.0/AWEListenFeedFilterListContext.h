@class NSString, AWEListenFeedFilterListViewModel, NSObject, AWEListDataController;
@protocol AWEListenFeedContextProtocol;

@interface AWEListenFeedFilterListContext : NSObject

@property (weak, nonatomic) AWEListenFeedFilterListViewModel *listViewModel;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *previousMethod;
@property (retain, nonatomic) NSObject<AWEListenFeedContextProtocol> *firstPageContext;

- (void)preloadMore;
- (void).cxx_destruct;

@end
