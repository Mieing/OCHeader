@class NSString;

@interface AWEFantaFeaturePTYProducer : NSObject <PTYIFeatureProducer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (float)toNumber:(id)a0;
- (id)toDictionary:(id)a0;
- (id)getStrFeature:(id)a0 extParams:(id)a1;
- (float)getNumicFeature:(id)a0 extParams:(id)a1;
- (id)getSeqFeature:(id)a0 extParams:(id)a1;
- (id)getDictFeature:(id)a0 extParams:(id)a1;
- (id)groupName;
- (id)toString:(id)a0;

@end
