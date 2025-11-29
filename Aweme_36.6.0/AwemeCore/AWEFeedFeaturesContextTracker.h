@class NSString;

@interface AWEFeedFeaturesContextTracker : HTSService <IESFeedFeaturesContextTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useCachedVideoModelMetaDict;

- (BOOL)fillFeatures:(id)a0 withModel:(id)a1 config:(id)a2;
- (id)getVideoTagFeatures:(id)a0;
- (id)audioTagFeature:(id)a0;

@end
