@class NSString, NSDictionary, RTVInteractionInitialAction, RTVInteractionFeedStreamModel, RTVInteractionFeedItemModel;

@interface RTVInteractionFeedContext : NSObject <RTVInteractionContext>

@property (retain, nonatomic) RTVInteractionInitialAction *initialAction;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (readonly, nonatomic) long long enterFrom;
@property (readonly, nonatomic) RTVInteractionFeedItemModel *firstItem;
@property (readonly, nonatomic) RTVInteractionFeedStreamModel *initialStream;
@property (readonly, nonatomic) BOOL isFromInteractionTypeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)default;

- (id)initWithEnterFrom:(long long)a0 trackDict:(id)a1;
- (void)updateIsFromInteractionTypeChange:(BOOL)a0;
- (void)updateFirstItem:(id)a0;
- (void)updateInitialStream:(id)a0;
- (void)updateInitialAction:(id)a0;
- (Class)fullScreenLayoutTransitionClass;
- (Class)NarrowLayoutTransitionClass;
- (void).cxx_destruct;

@end
