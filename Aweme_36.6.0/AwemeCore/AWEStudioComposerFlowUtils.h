@class NSString;

@interface AWEStudioComposerFlowUtils : NSObject <AWEStudioComposerFlowUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)destroyViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)backToRootAnimated:(BOOL)a0 completion:(id /* block */)a1;
+ (id)topFlow;
+ (void)exitFlow:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)exitFlows:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (id)publishModelWithViewController:(id)a0;
+ (id)findComposerFlowWithTopController:(id)a0 newTopController:(id *)a1;
+ (id)p_publishModelWithAlbumController:(id)a0;
+ (id)allFlows;


@end
