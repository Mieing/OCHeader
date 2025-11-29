@class NSString;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AFDStoryDiverseDiggBottomBarContext : NSObject <AFDStoryDiverseDiggBottomBarContextProtocol>

@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonContext;
@property (copy, nonatomic) id /* block */ getInteractionControllerBlock;
@property (copy, nonatomic) id /* block */ isDraggingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
