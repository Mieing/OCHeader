@class AWEMVChannelPageContext;

@interface AWEMVChannelForceInsertManager : NSObject

@property (weak, nonatomic) AWEMVChannelPageContext *context;
@property (nonatomic) BOOL forceInsertIsRequesting;

+ (long long)calculateNoNeedRevisitVideo;

- (void)fetchEntranceStrategyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
