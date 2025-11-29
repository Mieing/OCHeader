@class NSString;

@interface AWEFeedAwemeFeaturePTYProducer : NSObject <PTYIFeatureProducer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getStrFeature:(id)a0 extParams:(id)a1;
- (float)getNumicFeature:(id)a0 extParams:(id)a1;
- (id)getSeqFeature:(id)a0 extParams:(id)a1;
- (id)getDictFeature:(id)a0 extParams:(id)a1;
- (id)getAwemeIDFromParams:(id)a0;
- (id)getAwemeFeatures:(id)a0 strategyName:(id)a1 params:(id)a2;
- (id)innerGetSeqFeature:(id)a0 strategyName:(id)a1 params:(id)a2;
- (id)getAwemeOneFeature:(id)a0 strategyName:(id)a1 params:(id)a2;
- (id)getFeature:(id)a0 extParams:(id)a1;
- (id)valueToString:(id)a0;
- (id)valueToNumber:(id)a0;
- (id)valueToDictionary:(id)a0;
- (id)valueToArray:(id)a0;
- (id)getAwemeFeatures:(id)a0 aweme:(id)a1 typeList:(id)a2 strategyName:(id)a3 params:(id)a4;
- (id)getAwemeIDListFormCurrentDataSourceWithRange:(long long)a0 isGetPre:(BOOL)a1 excludeCurrent:(BOOL)a2;
- (id)groupName;

@end
