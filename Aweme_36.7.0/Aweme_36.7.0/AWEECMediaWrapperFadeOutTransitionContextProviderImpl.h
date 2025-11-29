@class NSString, AWEECMediaWrapperElement;

@interface AWEECMediaWrapperFadeOutTransitionContextProviderImpl : NSObject <AWEECMediaWrapperFadeOutTransitionContextProvider>

@property (weak, nonatomic) AWEECMediaWrapperElement *mediaWrapperElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void).cxx_destruct;

@end
