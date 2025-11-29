@class NSArray;

@interface AWEProfileBaseContainerContext : NSObject

@property (copy, nonatomic) NSArray *tabItemsArray;
@property (copy, nonatomic) NSArray *sectionControllerClassArray;
@property (nonatomic) long long landingIndex;
@property (copy, nonatomic) id /* block */ changeTabItemBlock;
@property (copy, nonatomic) id /* block */ exposeTabItemBlock;
@property (copy, nonatomic) id /* block */ layoutVisibleItemsBlock;
@property (copy, nonatomic) id /* block */ updateVisibleItemsBlock;
@property (copy, nonatomic) id /* block */ bubbleDidAppearBlock;

- (void).cxx_destruct;

@end
