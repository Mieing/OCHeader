@class DitoPageContext, NSString, NSDictionary, DitoEvent;

@interface DitoSwitchNodeActionOperation : NSObject

@property (copy, nonatomic) NSString *targetKey;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) DitoEvent *event;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) DitoPageContext *pageContext;
@property (nonatomic) BOOL legitimate;

- (void)invokeCompletionBlock;
- (void)requestData:(id)a0;
- (id)initWithTargetKey:(id)a0 cacheKey:(id)a1 requestParams:(id)a2 event:(id)a3 completionBlock:(id /* block */)a4;
- (void)runWithPageContext:(id)a0;
- (id)refreshNodeTag;
- (id)fetchRequestActionWithRequestParams:(id)a0;
- (id)fetchClearAction;
- (void)requestDataWithAction:(id)a0;
- (void)dispatchShowLoadingAction;
- (void).cxx_destruct;
- (void)run;

@end
