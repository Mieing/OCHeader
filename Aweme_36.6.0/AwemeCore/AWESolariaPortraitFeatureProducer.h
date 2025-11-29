@class NSString;

@interface AWESolariaPortraitFeatureProducer : NSObject <PTYIFeatureProducer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getStrFeature:(id)a0 extParams:(id)a1;
- (float)getNumicFeature:(id)a0 extParams:(id)a1;
- (id)getSeqFeature:(id)a0 extParams:(id)a1;
- (id)getDictFeature:(id)a0 extParams:(id)a1;
- (unsigned long long)p_getPortraitType:(id)a0;
- (id)p_getOneFeature:(id)a0 extParams:(id)a1;
- (id)groupName;

@end
