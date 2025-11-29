@class NSString, UIView;
@protocol AFDSlidesViewProtocol, AWESearchImageReuseHandlerDelegate;

@interface AWESearchImageReuseHandler : NSObject <AWESearchElementReuseProtocol>

@property (nonatomic) BOOL shouldUpdatePlayer;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (weak, nonatomic) id<AWESearchImageReuseHandlerDelegate> delegate;
@property (nonatomic) BOOL shouldFixUpdateCrash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasPrepareToReuse;
- (void)resumeSearchElementContext:(id)a0;
- (void)stashSearchElementContext;
- (BOOL)enableReplaceSlidesView;
- (void).cxx_destruct;
- (id)init;
- (id)reuseIdentifier;

@end
