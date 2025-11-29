@class NSError, AWEECJumpToMallContextModel, AWEAwemeModel;

@interface AWEECFeedMallJumpGuideAction : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isFeedShowing;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL running;
@property (retain, nonatomic) AWEECJumpToMallContextModel *jumpTabGrassContext;

+ (id)mallJumpGuideActionWithContextModel:(id)a0;

- (id)initWithContextModel:(id)a0;
- (void)checkCanStart;
- (void)active:(id /* block */)a0;
- (void)markFeedShowing;
- (BOOL)checkCanShowTab;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)finishWithError:(id)a0;

@end
