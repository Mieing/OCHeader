@class NSString;
@protocol ACCChapterZoomTransitionOuterContextProvider;

@interface ACCChapterMagnifyTransition : NSObject <DVEPreviewTransitionContextProvider>

@property (weak, nonatomic) id<ACCChapterZoomTransitionOuterContextProvider> outerProvider;
@property (copy, nonatomic) id /* block */ outterSnapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (void)p_clearSnapCache;
- (BOOL)isForAppear;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
