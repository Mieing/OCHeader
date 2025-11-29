@class NSString, NSDictionary, LVDraftMigrationContext;
@protocol LVDraftMigrationTaskDelegate;

@interface LVDraftMigrationTask : NSObject

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *root;
@property (nonatomic) unsigned long long taskIndex;
@property (retain, nonatomic) NSDictionary *oldJson;
@property (weak, nonatomic) id<LVDraftMigrationTaskDelegate> delegate;
@property (readonly, nonatomic) LVDraftMigrationContext *context;

- (void)updateTaskIndex:(unsigned long long)a0;
- (BOOL)isTimeConsuming;
- (BOOL)needUpgrade:(id)a0;
- (BOOL)needCopyFiles:(long long)a0;
- (void)configRoot:(id)a0;
- (void)migrateDraft:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(long long)a0 context:(id)a1;

@end
