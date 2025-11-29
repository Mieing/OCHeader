@protocol AWEPlayInteractionContextProtocol;

@interface AWEKnowledgeRichContentImpl.RichAwemeButtonElementViewController : NSObject <AWERichAwemeButtonElementViewControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_goodBusinessImpl;
}

@property (nonatomic, retain) id<AWEPlayInteractionContextProtocol> playInteractionContext;

- (BOOL)shouldShowElementWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
