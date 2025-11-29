@class NSString;

@interface AWEBaseFeatureModel : NSObject <AWEFeatureModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)featureForKey:(id)a0 extra:(id)a1;
- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
