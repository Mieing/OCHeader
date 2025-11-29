@protocol AWEPlayInteractionContextProtocol;

@interface AWEKnowledgeRichContentImpl.RichAwemeCustomInfoElementViewController : NSObject <AWERichAwemeCustomInfoElementViewControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_goodBusinessImpl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lifeCardBusinessImpl;
}

@property (nonatomic, retain) id<AWEPlayInteractionContextProtocol> playInteractionContext;

+ (BOOL)shouldShowElementWithContext:(id)a0;

- (BOOL)shouldShowElementWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
