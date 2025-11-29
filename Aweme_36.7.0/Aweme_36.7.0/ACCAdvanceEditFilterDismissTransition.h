@class NSString;
@protocol ACCNLEEditZoomTransitionOuterContextProvider;

@interface ACCAdvanceEditFilterDismissTransition : NSObject <DVEPreviewTransitionContextProvider>

@property (weak, nonatomic) id<ACCNLEEditZoomTransitionOuterContextProvider> innerProvider;
@property (copy, nonatomic) id /* block */ outterSnapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
