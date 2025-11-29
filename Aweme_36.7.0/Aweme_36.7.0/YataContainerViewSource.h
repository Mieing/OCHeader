@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_group, YataInstanceInnerInterface;

@interface YataContainerViewSource : NSObject

@property (retain, nonatomic) NSMutableDictionary *seqKeyDict;
@property (retain, nonatomic) NSMutableDictionary *animationIntermediateSeqKeyDict;
@property (retain, nonatomic) NSMutableDictionary *animationChangingSeqKeyDict;
@property (retain, nonatomic) NSSet *addingAnimatableNodeKeys;
@property (retain, nonatomic) NSSet *deletingAnimatableNodeKeys;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *observerGroup;
@property (nonatomic) BOOL useGroupNotifyRefresh;
@property (retain, nonatomic) NSMutableDictionary *sourceDic;
@property (retain, nonatomic) NSMutableDictionary *observerDict;

+ (id)generateAnimationIntermediateArrayWithPrevNodeKeys:(id)a0 currNodeKeys:(id)a1 appearingAnimatableNodeFilter:(id /* block */)a2 disappearingAnimatableNodeFilter:(id /* block */)a3;

- (id)initWithYataInstance:(id)a0;
- (void)registerObserver:(id)a0 observer:(id)a1;
- (BOOL)containsChangingAnimationNodes;
- (id)containerControllerForType:(id)a0;
- (void)reportErrorCode:(unsigned long long)a0 detail:(id)a1 extraParams:(id)a2;
- (BOOL)needChangingAnimation:(id)a0;
- (BOOL)needAppearingAnimation:(id)a0;
- (BOOL)needDisappearingAnimation:(id)a0;
- (void)updateSourceContainerWithCompletion:(id /* block */)a0;
- (void)observerOnChangeWithoutGroupNotify:(id /* block */)a0;
- (void)observerOnChangeWithGroupNotify:(id /* block */)a0;
- (unsigned long long)triggerSourceForSourceStr:(id)a0;
- (BOOL)needAnimation:(id)a0;
- (void)updateRenderNodeArray:(id)a0 updateCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
