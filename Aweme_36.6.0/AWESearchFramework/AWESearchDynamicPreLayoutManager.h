@class NSString, NSMutableArray, AWESearchDynamicPreLayoutTask;

@interface AWESearchDynamicPreLayoutManager : NSObject <AWESearchDynamicPreLayoutManagerProtocol>

@property (retain, nonatomic) NSMutableArray *taskhQueue;
@property (weak, nonatomic) AWESearchDynamicPreLayoutTask *previousTask;
@property (nonatomic) long long layoutStrategy;
@property (retain, nonatomic) Class preprocessClass;
@property (nonatomic) BOOL enableMaximumExceedTime;
@property (nonatomic) BOOL enableForceConcurrent;
@property (copy, nonatomic) NSString *searchScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelPreviousTaskWithProcessFinish:(BOOL)a0;
- (void)createLayoutTaskWithArray:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithLayoutStrategy:(long long)a0;
- (void)trackLayoutFail:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
