@class NSString, AWESpecialCardProxy;
@protocol AWESpecialCardDelegateCallProtocol, AWESpecialCardControllerProtocol;

@interface AWESpecialCardDelegateImpl : NSObject <AWESpecialCardDelegate>

@property (weak, nonatomic) id<AWESpecialCardDelegateCallProtocol> dispatchController;
@property (weak, nonatomic) id<AWESpecialCardControllerProtocol> cardController;
@property (weak, nonatomic) AWESpecialCardProxy *cardProxy;
@property (copy, nonatomic) NSString *businessID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCardWithExtraParams:(id)a0 completion:(id /* block */)a1;
- (void)insertCardWithModel:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (BOOL)deleteCardWithModel:(id)a0 animated:(BOOL)a1;
- (void)insertCard:(id)a0 after:(long long)a1 tolerance:(long long)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)trackFeedCardActionButtonClickedWithModel:(id)a0 enterMethod:(id)a1 extraDict:(id)a2;
- (void)trackFeedCardDislikeButtonClickedWithModel:(id)a0 enterMethod:(id)a1 extraDict:(id)a2;
- (void)cardActionButtonClicked:(id)a0;
- (void)preCreateLynxCardWithModel:(id)a0 completion:(id /* block */)a1;
- (void)removePreCreateLynxCardWithModel:(id)a0;
- (BOOL)containsPreCreateLynxCardWithModel:(id)a0;
- (void).cxx_destruct;

@end
