@class NSPointerArray;

@interface AWELongVideoPlusPlayInteractionNewElementDispatchManager : AWEPlayInteractionNewElementDispatchManager

@property (retain, nonatomic) NSPointerArray *nestedContainerList;
@property (retain, nonatomic) NSPointerArray *customElements;

- (BOOL)needUpdateElements;
- (void)_afterSetData;
- (void)customElements:(id)a0;
- (void)hidePlayInteractionTagsElement;
- (void)hidePlayInteractionAnchorElement;
- (void)hidePlayInteractionCoCreatorInfoElement;
- (void)hidePlayInteractionLongVideoPlusInfoWithCoverLeftNewElement;
- (void).cxx_destruct;

@end
