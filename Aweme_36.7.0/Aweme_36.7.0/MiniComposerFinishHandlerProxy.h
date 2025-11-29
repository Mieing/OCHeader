@class NSString;
@protocol MiniComposerFinishContext;

@interface MiniComposerFinishHandlerProxy : NSObject <MiniComposerFinishContext>

@property (weak, nonatomic) id<MiniComposerFinishContext> impl;
@property (nonatomic) BOOL DEBUGEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)weakSelf;
- (void)setShouldForceMergeImageBlock:(id /* block */)a0;
- (id)UIManager;
- (void)exportAllItems:(id /* block */)a0;
- (id)creationData;
- (void)retainSession;
- (void).cxx_destruct;
- (void)releaseSession;

@end
