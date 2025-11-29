@class NSString, NSMapTable;
@protocol AWEPostPageContext;

@interface AWEPostPageBubbleHandler : NSObject <AWEPostPageBubbleService>

@property (retain, nonatomic) NSMapTable *bubbleHolderMap;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)showBubbleWithIdentifiers:(id)a0;
- (id)topologicalSortBubbleArrayInContainer:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
