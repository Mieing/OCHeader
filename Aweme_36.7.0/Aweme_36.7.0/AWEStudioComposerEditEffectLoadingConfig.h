@class NSString;

@interface AWEStudioComposerEditEffectLoadingConfig : NSObject <AWEStudioComposerEditEffectLoadingComponentConfig>

@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id /* block */ timeoutWillDismissBlock;
@property (copy, nonatomic) id /* block */ timeoutDidDismissBlock;
@property (copy, nonatomic) id /* block */ didTapCancelBlock;
@property (copy, nonatomic) id /* block */ effectDidApplyBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
