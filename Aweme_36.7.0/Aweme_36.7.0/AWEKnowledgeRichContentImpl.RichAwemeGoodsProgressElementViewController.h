@protocol AWEPlayInteractionContextProtocol;

@interface AWEKnowledgeRichContentImpl.RichAwemeGoodsProgressElementViewController : NSObject <AWERichAwemeGoodsProgressElementBusinessProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_goodBusinessImpl;
}

@property (nonatomic, retain) id<AWEPlayInteractionContextProtocol> playInteractionContext;

+ (BOOL)shouldShowElementWithContext:(id)a0;

- (void)updateProgressFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (BOOL)shouldShowElementWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
