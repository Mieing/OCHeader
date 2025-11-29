@class NSString;

@interface AWEPadRotationTranslationAdapter : HTSService <AWEPadRotationTranslationAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewControllerTranslation:(id)a0 coordinator:(id)a1 customFilter:(id /* block */)a2 beforeTranslation:(id /* block */)a3 translation:(id /* block */)a4 afterTranslation:(id /* block */)a5;

@end
