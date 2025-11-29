@class NSString, NSMutableArray, AWEDLMSession;

@interface AWEExternalRouterBlockManager : NSObject

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableArray *blockRules;
@property (weak, nonatomic) AWEDLMSession *deeplinkSession;

- (id)initWithURLString:(id)a0 scene:(id)a1 linkSession:(id)a2;
- (void)addBlockRule:(id)a0;
- (void)clearAllRules;
- (BOOL)isBlockedURLString:(id)a0 context:(id)a1 userActivity:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
