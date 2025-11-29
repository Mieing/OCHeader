@class LVDraftMigrationFlow;
@protocol LVTemplateMigrationProxyDelegate;

@interface LVTemplateMigrationProxy : NSObject {
    LVDraftMigrationFlow *flow;
    id /* block */ completeCallBack;
}

@property (weak, nonatomic) id<LVTemplateMigrationProxyDelegate> delegate;

- (void)migrateDraftWithSourcePath:(id)a0 jsonString:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
