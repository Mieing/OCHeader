@class NSString;

@interface AWEAdRefinementStrategyDelegate : NSObject <BDAUserFeatureInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userFeature:(id)a0 group:(id)a1 dataType:(long long)a2 extraModel:(id)a3;

@end
