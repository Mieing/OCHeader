@class UIViewController;
@protocol IGListCollectionContext;

@interface IGListSectionControllerThreadContext : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<IGListCollectionContext> collectionContext;

- (void).cxx_destruct;

@end
