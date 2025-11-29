@class NSString, NSDictionary, PIASTLQueue, PIAContext;

@interface PIAStreamingModule : NSObject <PIAStreamingMessage, JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) PIAContext *context;
@property (retain, nonatomic) PIASTLQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)onDocumentComplete:(id)a0;
- (void)appendHeaders:(id)a0;
- (void)appendBody:(id)a0;
- (id)getPolyFillTemplate:(id)a0;
- (void).cxx_destruct;
- (void)finish;
- (void)dealloc;

@end
