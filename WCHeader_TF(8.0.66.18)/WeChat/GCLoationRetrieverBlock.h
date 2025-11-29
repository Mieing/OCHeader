@class NSString, LocationRetriever;

@interface GCLoationRetrieverBlock : NSObject <LocationRetrieveDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) LocationRetriever *retriever;
@property (retain, nonatomic) GCLoationRetrieverBlock *selfRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRetriveComplectionBlock:(id /* block */)a0;
- (void)retrieve;
- (void)endWithLocation:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void).cxx_destruct;

@end
