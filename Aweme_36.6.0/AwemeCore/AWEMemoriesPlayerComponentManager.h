@class NSArray, AWEMemoriesPlayerContext, NSString;
@protocol IESServiceProvider;

@interface AWEMemoriesPlayerComponentManager : NSObject <AWEMemoriesPlayerComponentProtocol>

@property (readonly, weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, copy, nonatomic) NSArray *components;
@property (retain, nonatomic) AWEMemoriesPlayerContext *playerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (id)componentClasses;
- (void)componentDidLoad;
- (void)setupWithMemoriesDataController:(id)a0;
- (void)bindPlayerConfigManager:(id)a0;
- (void)bindPlayerControlManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
