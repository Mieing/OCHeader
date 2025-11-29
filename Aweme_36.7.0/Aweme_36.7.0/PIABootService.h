@class NSString, PIABiMapTable, NSMutableDictionary;

@interface PIABootService : NSObject <PIABootService>

@property (retain, nonatomic) PIABiMapTable *bootTable;
@property (retain, nonatomic) NSMutableDictionary *bootDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)injectBootBridgeWithContext:(id)a0 instance:(id)a1;
- (void)bootFinishWithContext:(id)a0 URL:(id)a1;
- (void)addBootResultWithContext:(id)a0 URL:(id)a1 result:(id)a2;
- (BOOL)checkBootFinishWithContext:(id)a0 bootList:(id)a1;
- (void).cxx_destruct;

@end
