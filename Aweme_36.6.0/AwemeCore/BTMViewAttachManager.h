@class NSMutableDictionary;

@interface BTMViewAttachManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *completions;

- (void)viewDidRenderOnScreen:(id)a0;
- (id)getAssociateUuidForView:(id)a0;
- (void)setAssociateUuid:(id)a0 forView:(id)a1;
- (void)addCompletionToStorage:(id /* block */)a0 forKey:(id)a1;
- (id)getAndRemoveCompletionsForKey:(id)a0;
- (void)waitReponderAtteched:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
