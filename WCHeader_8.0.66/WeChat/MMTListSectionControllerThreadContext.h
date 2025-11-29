@class MMUIViewController;
@protocol MMTListTableViewContext;

@interface MMTListSectionControllerThreadContext : NSObject

@property (weak, nonatomic) MMUIViewController *viewController;
@property (weak, nonatomic) id<MMTListTableViewContext> tableViewContext;

- (void).cxx_destruct;

@end
